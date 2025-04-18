﻿#include "PlayerController.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"
#include "Engine/Core/Log.h"
#include "GameManager.h"


PlayerController* PlayerController::_instance = nullptr;

PlayerController::PlayerController(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

PlayerController* PlayerController::GetInstance()
{
	return _instance;
}

Vector3 PlayerController::GetVelocity()
{
	return _characterController->GetVelocity();
}

void PlayerController::OnEnable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Bind<PlayerController, &PlayerController::OnTriggerEnter>(this);
	_characterController->CollisionEnter.Bind<PlayerController, &PlayerController::OnCollisionEnter>(this);


}

void PlayerController::OnDisable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Unbind<PlayerController, &PlayerController::OnTriggerEnter>(this);
	_characterController->CollisionEnter.UnbindAll();

}

void PlayerController::OnAwake()
{
	_instance = this;
}

void PlayerController::OnUpdate()
{
	HandleMovement();
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
	GameManager::GetInstance()->AddToResets(this);

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

}

void PlayerController::HandleMovement()
{
	PitchCamera();
	RotateBody();
	EvaluateState();
	HandleHorizontalMovement();
	HandleVerticalMovement();
	EvaluateJump();
	HandleShooting();
	ApplyMovement();

}

void PlayerController::EvaluateState()
{
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
		_currentVelocity = _characterController->GetVelocity();

	}
	else
	{
		_currentVelocity = Vector3::Zero;
	}
	_awaitingReset = false;
}

void PlayerController::PitchCamera()
{
	if (!_cameraContainer)
	{
		LOG(Error, "_cameraContainer not set on Player!");
		return;
	}
	if (_dead)
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
	if (_dead)
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

	if (_dead)
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


}

void PlayerController::HandleVerticalMovement()
{
	if (!_characterController)
	{
		LOG(Error, "_characterController not set on Player!");
		return;
	}
	if (Input::GetKeyDown(KeyboardKeys::Spacebar))
	{
		_timeJumpLastPressed = Time::GetGameTime();
	}
	float jumpBufferTime = 0.4;
	float coyoteTime = 0.4;

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

void PlayerController::Jump()
{

	

	_timeJumpLastPressed = -9999.9;
	_timeLastGrounded = -9999.9;
	_currentVelocity.Y = _jumpSpeed;
}

void PlayerController::WallJump(Vector3 wallNormal)
{
}

void PlayerController::EvaluateJump()
{
	//Clear Old Contact Data
	float contactRelevanceTime = 0.2; 

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
	if (Input::GetKeyDown(KeyboardKeys::Spacebar))
	{
		_timeJumpLastPressed = Time::GetGameTime();
	}
	float jumpBufferTime = 0.2;
	if (Time::GetGameTime() - _timeJumpLastPressed  > jumpBufferTime)
	{
		return;
		
	}
	if (_activeContacts.size() == 0)
	{
		return;
	}
	Vector3 effectiveNormal = Vector3::Zero;
	while (!_activeContacts.empty())
	{
		float contactLife = Time::GetGameTime() - _activeContacts.front().First;
		float contactRelevanceFactor = contactLife / contactRelevanceTime;
		effectiveNormal += _activeContacts.front().Second * contactRelevanceFactor;
		_activeContacts.pop();
	}

	effectiveNormal.Normalize();
	
	Vector3 totalVelocityDelta = Vector3::Zero;
	totalVelocityDelta.Y += _jumpVerticalForce;
	totalVelocityDelta += (effectiveNormal * _jumpNormalForce);

	_currentVelocity += totalVelocityDelta;
	LOG_STR(Info, totalVelocityDelta.ToString());
	_timeJumpLastPressed = -9999.9;
}

void PlayerController::Die()
{
	_dead = true;
	GameManager* instance = GameManager::GetInstance();
	if (instance)
	{
		instance->EndGame();
	}
}

void PlayerController::HandleShooting()
{
	if (!_cameraContainer)
	{
		return;
	}

	if (Input::GetMouseButtonDown(MouseButton::Left))
	{
		float recoilPower = 3000.0;
		Quaternion directionFaced = _cameraContainer->GetOrientation();
		Vector3 recoilImpulse = directionFaced * Vector3::Forward * -recoilPower;
		_currentVelocity += recoilImpulse;
	}
}

void PlayerController::OnTriggerEnter(PhysicsColliderActor* other)
{
	Tag killsOnContactTag = Tags::Get(TEXT("KillsOnContact"));
	if (other->HasTag(killsOnContactTag))
	{
		Die();
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
