﻿#include "PlayerController.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"
#include "Engine/Core/Log.h"
#include "GameManager.h"
#include "Pickup.h"
#include "PlayerWeapon.h"

PlayerController* PlayerController::_instance = nullptr;

PlayerController::PlayerController(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

bool PlayerController::IsDead()
{
	return _dead;
}

PlayerController* PlayerController::GetInstance()
{
	return _instance;
}

Vector3 PlayerController::GetVelocity()
{
	return _characterController->GetVelocity();
}

void PlayerController::FireShotgun(float recoilPower)
{
	_frameRecoil = recoilPower;
}

Quaternion PlayerController::GetCameraOrientation()
{
	return _cameraContainer->GetOrientation();
}

Vector3 PlayerController::GetCameraPosition()
{
	return _cameraContainer->GetPosition();
}

void PlayerController::HandlePickup(int pickupType)
{
	if (pickupType == 3)
	{
		GameManager* instance = GameManager::GetInstance();
		if (instance)
		{
			instance->Win();
		}
	}
	if (pickupType == 0)
	{
		GameManager::GetInstance()->AddTime(3);
	}
	PlayerWeapon* weapon = GetActor()->GetScript<PlayerWeapon>();
	if (weapon)
	{
		weapon->HandlePickup(pickupType);
	}
}

void PlayerController::OnEnable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Bind<PlayerController, &PlayerController::OnTriggerEnter>(this);
	_characterController->CollisionEnter.Bind<PlayerController, &PlayerController::OnCollisionEnter>(this);
	GameManager::GetInstance()->OnReset.Bind<PlayerController, &PlayerController::Reset>(this);

}

void PlayerController::OnDisable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Unbind<PlayerController, &PlayerController::OnTriggerEnter>(this);
	_characterController->CollisionEnter.UnbindAll();
	GameManager::GetInstance()->OnReset.Unbind<PlayerController, &PlayerController::Reset>(this);

}

void PlayerController::OnAwake()
{
	_instance = this;
}

void PlayerController::OnUpdate()
{
	HandleMovement();

	if (GameManager::GetInstance()->_time < 0)
	{
		Die();
	}
	if (Input::GetKeyDown(KeyboardKeys::R))
	{
		Die();
		GameManager::GetInstance()->ResetGame();
	}
}

void PlayerController::OnStart()
{
	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}
	if (!_cameraContainer)
	{
		LOG(Error, "_cameraContainer not set on Player!");
		return;
	}
	if (!GameManager::GetInstance())
	{
		LOG(Error, "GameManager not instantiated!");
		return;
	}

	_startingBodyRotation = _characterController->GetOrientation().GetEuler().Y;
	_bodyRotation = _startingBodyRotation;

	_startingCameraPitch = _cameraContainer->GetLocalOrientation().GetEuler().X;
	_cameraPitch = _startingCameraPitch;

	_startingPosition = _characterController->GetPosition();

}

void PlayerController::Reset()
{
	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}
	_characterController->SetPosition(_startingPosition);
	_bodyRotation = _startingBodyRotation;
	_cameraPitch = _startingCameraPitch;
	_playerBody->SetOrientation(Quaternion::Euler(0, _bodyRotation, 0));
	_cameraContainer->SetOrientation(Quaternion::Euler(0, 0, _cameraPitch));
	_dead = false;
	_currentVelocity = Vector3::Zero;
	_awaitingReset = true;
	_frameRecoil = 0.0;

}

void PlayerController::HandleMovement()
{
	EvaluateState();
	PitchCamera();
	RotateBody();
	HandleShooting();
	EvaluateJump();
	HandleHorizontalMovement();
	HandleVerticalMovement();

	ApplyMovement();

}

void PlayerController::EvaluateState()
{
	LOG_STR(Info, TEXT("Velocity before EvaluateState: ") + _currentVelocity.ToString());

	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}
	if (_characterController->IsGrounded())
	{
		_state = Ground;
		_timeLastGrounded = Time::GetGameTime();
	}
	else
	{
		_state = Air;
	}
	if (!_awaitingReset)
	{
		float speed = Math::Min(_characterController->GetVelocity().Length(), _currentVelocity.Length());
		if (_characterController->GetVelocity().Length() < _currentVelocity.Length())
		{
			_currentVelocity = _currentVelocity.GetNormalized() * speed;
		}
		else
		{

		}
	}
	else
	{
		_currentVelocity = Vector3::Zero;
		if (Input::GetKey(KeyboardKeys::Spacebar))
		{
			_holdingSpaceOnStart = true;
		}
	}
	if (Input::GetKeyUp(KeyboardKeys::Spacebar))
	{
		_holdingSpaceOnStart = false;
	}
	_awaitingReset = false;
	LOG_STR(Info, TEXT("Velocity after EvaluateState: ") + _currentVelocity.ToString());

}

void PlayerController::PitchCamera()
{
	if (!_cameraContainer)
	{
		LOG(Error, "_cameraContainer not set on Player!");
		return;
	}
	if (GameManager::GetInstance()->IsGameOver())
	{
		return;
	}

	_isLookingBackward = Input::GetKey(KeyboardKeys::Shift);

	float mouseY = Input::GetAxis(TEXT("Mouse Y"));

	_cameraPitch = Math::Clamp(mouseY + _cameraPitch, -88.0f, 88.0f);
	float cameraFactor = Math::Saturate(_rotationSmoothing * Time::GetDeltaTime());
	_cameraContainer->SetLocalOrientation(
		Quaternion::Lerp(
			_cameraContainer->GetLocalOrientation(),
			Quaternion::Euler(_cameraPitch, (_isLookingBackward ? 180.0 : 0.0), 0.0),
			cameraFactor
		));
}

void PlayerController::RotateBody()
{
	if (!_playerBody)
	{
		LOG(Error, "_playerBody not set on Player!");
		return;
	}

	if (GameManager::GetInstance()->IsGameOver())
	{
		return;
	}
	float mouseX = Input::GetAxis(TEXT("Mouse X"));

	_bodyRotation += mouseX;


	float rotationFactor = Math::Saturate(_rotationSmoothing * Time::GetDeltaTime());
	_playerBody->SetOrientation(
		Quaternion::Lerp(
			_playerBody->GetOrientation(),
			Quaternion::Euler(0, _bodyRotation, 0),
			rotationFactor
		));
}

void PlayerController::HandleHorizontalMovement()
{
	

	float forward = Input::GetAxis(TEXT("Vertical"));
	float right = Input::GetAxis(TEXT("Horizontal"));
	Transform transform = GetActor()->GetTransform();
	Vector3 desiredMove = Vector3::Zero;
	desiredMove += transform.GetForward() * forward;
	desiredMove += transform.GetRight() * right;
	desiredMove.Normalize();

	if (GameManager::GetInstance()->IsGameOver())
	{
		desiredMove = Vector3::Zero;
	}
	Vector3 currentHorizontalVelocity = _currentVelocity;
	currentHorizontalVelocity.Y = 0;
	float currentSpeed = currentHorizontalVelocity.Length();

	switch (_state)
	{
	default:
		break;
	case Air:
		if (desiredMove.LengthSquared() < 0.01)
		{
			break;
		}
		if (currentSpeed > _movementSpeed)
		{
			desiredMove *= currentSpeed;
		}
		else
		{
			desiredMove *= _movementSpeed;
		}
		desiredMove.Y = _currentVelocity.Y;
		_currentVelocity = Vector3::MoveTowards(_currentVelocity, desiredMove, _airMovementAcceleration * Time::GetDeltaTime());

		break;
	case Ground:
		desiredMove *= _movementSpeed;
		desiredMove.Y = _currentVelocity.Y;
		_currentVelocity = Vector3::MoveTowards(_currentVelocity, desiredMove, _groundMovementAcceleration * Time::GetDeltaTime());
		break;
	}

	LOG_STR(Info, TEXT("Velocity after Horizontal Movement: ") + _currentVelocity.ToString());



}

void PlayerController::HandleVerticalMovement()
{
	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}

	switch (_state)
	{
	default:
		return;
	case Ground:
		if (_currentVelocity.Y < 0)
		{
			_currentVelocity.Y = 0;
		}
		//if (Time::GetGameTime() - _timeJumpLastPressed <= jumpBufferTime)
		//{
		//	Jump();
		//}
		break;
	case Air:
		_currentVelocity.Y -= _gravity * Time::GetDeltaTime();
		//if (_timeJumpLastPressed == Time::GetGameTime() && Time::GetGameTime() - _timeLastGrounded <= coyoteTime)
		//{
		//	Jump();
		//}
		break;
	}
	LOG_STR(Info, TEXT("Velocity after Vertical Movement: ") + _currentVelocity.ToString());

}

void PlayerController::ApplyMovement()
{
	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}

	_characterController->Move(_currentVelocity * Time::GetDeltaTime());
}

void PlayerController::EvaluateJump()
{
	//Clear Old Contact Data
	float contactRelevanceTime = 0.1;

	if (_dead)
	{
		while (!_activeContacts.empty())
		{
			_activeContacts.pop();
		}
		return;
	}

	while (!_activeContacts.empty())
	{
		if (Time::GetGameTime() - _activeContacts.front().First > contactRelevanceTime)
		{
			_activeContacts.pop();
		}
		else
		{
			break;
		}
	}
	
	if (_activeContacts.size() == 0)
	{
		return;
	}
	if (Input::GetKey(KeyboardKeys::Spacebar) && !GameManager::GetInstance()->IsGameOver() && !_holdingSpaceOnStart)
	{
		_timeJumpLastPressed = Time::GetGameTime();
	}
	float jumpBufferTime = 0.1;
	if (Time::GetGameTime() - _timeJumpLastPressed > jumpBufferTime)
	{
		return;

	}

	LOG_STR(Info, TEXT("Velocity before Jump: ") + _currentVelocity.ToString());
	Vector3 effectiveNormal = Vector3::Zero;
	
	while (!_activeContacts.empty())
	{
		float contactLife = Time::GetGameTime() - _activeContacts.front().First;
		float contactRelevanceFactor = contactLife / contactRelevanceTime;
		effectiveNormal += _activeContacts.front().Second * contactRelevanceFactor;
		_activeContacts.pop();
	}
	effectiveNormal.Normalize();

	Vector3 reflectedVelocity;
	Vector3::Reflect(_currentVelocity, effectiveNormal, reflectedVelocity);

	_currentVelocity = reflectedVelocity;

	if (_currentVelocity.Y < _jumpVerticalForce)
	{
		_currentVelocity.Y = _jumpVerticalForce;
	}

	float projectedLength = Vector3::Project(_currentVelocity, effectiveNormal).Length();
	if (projectedLength < _jumpNormalForce)
	{
		float diff = _jumpNormalForce - projectedLength;
		_currentVelocity += effectiveNormal * diff;
	}

	if (_jumpSource)
	{
		_jumpSource->SetTime(0);
		_jumpSource->Play();
	}
	_state = Air;
	LOG_STR(Info, TEXT("Velocity after HandleJump: ") + _currentVelocity.ToString());


}

void PlayerController::Die()
{

	if (_dead)
	{
		return;
	}
	if (_splatSource)
	{
		_splatSource->SetTime(0);
		_splatSource->Play();
	}

	if (_loseSource)
	{
		_loseSource->SetTime(0);
		_loseSource->Play();
	}
	_dead = true;
	GameManager* instance = GameManager::GetInstance();
	if (instance)
	{
		instance->Lose();
	}
	if (_jibPrefab)
	{
		for (int i = 0; i < 10; i++)
		{

			PrefabManager::SpawnPrefab(_jibPrefab, _cameraContainer->GetPosition());

		}
	}
}

void PlayerController::HandleShooting()
{
	if (!_cameraContainer)
	{
		return;
	}
	Quaternion directionFaced = _cameraContainer->GetOrientation();
	Vector3 recoilImpulse = directionFaced * Vector3::Forward * -_frameRecoil;
	_currentVelocity += recoilImpulse;
	_frameRecoil = 0.0;
	LOG_STR(Info, TEXT("Velocity after HandleShooting: ") + _currentVelocity.ToString());

}

void PlayerController::OnTriggerEnter(PhysicsColliderActor* other)
{
	if (_awaitingReset || GameManager::GetInstance()->IsGameOver())
	{
		return;
	}
	Tag killsOnContactTag = Tags::Get(TEXT("KillsOnContact"));
	if (other->HasTag(killsOnContactTag))
	{
		if (!_dead)
		{
			Die();

		}
	}
	Pickup* pickup = other->GetScript<Pickup>();
	if (pickup)
	{
		if (!_dead)
		{
			pickup->Grab();

		}
	}
}

void PlayerController::OnCollisionEnter(const Collision& collision)
{
	if (collision.ContactsCount == 0)
	{
		return;
	}
	Vector3 normal = Vector3::Zero;
	for (const ContactPoint& point : collision.Contacts)
	{
		float length = point.Normal.LengthSquared();

		if (length < 0.5f || length > 1.5f)
		{
			continue;
		}
		normal += point.Normal;
		//LOG_STR(Info, point.Normal.ToString());
	}
	float normalLength = normal.LengthSquared();
	if (normalLength < 0.5f || normalLength > 1.5f)
	{
		return;
	}

	normal.Normalize();
	//LOG_STR(Info, normal.ToString());

	_activeContacts.emplace(Pair<float, Vector3>(Time::GetGameTime(), normal));

}
