#include "PlayerController.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"
#include "Engine/Core/Log.h"
#include "GameManager.h"

PlayerController::PlayerController(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void PlayerController::OnEnable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Bind<PlayerController, &PlayerController::OnTriggerEnter>(this);
	
	
}

void PlayerController::OnDisable()
{
	if (!_characterController)
	{
		return;
	}
	_characterController->TriggerEnter.Unbind<PlayerController, &PlayerController::OnTriggerEnter>(this);

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

}

void PlayerController::HandleMovement()
{
	PitchCamera();
	RotateBody();
	EvaluateState();
	HandleHorizontalMovement();
	HandleVerticalMovement();
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
	float mouseY = Input::GetAxis(TEXT("Mouse Y"));

	_cameraPitch = Math::Clamp(mouseY + _cameraPitch, -88.0f, 88.0f);
	float cameraFactor = Math::Saturate(_rotationSmoothing * Time::GetDeltaTime());
	_cameraContainer->SetLocalOrientation(
		Quaternion::Lerp(
			_cameraContainer->GetLocalOrientation(),
			Quaternion::Euler(_cameraPitch, 0.0, 0.0),
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
	desiredMove *= _movementSpeed;
	if (_dead)
	{
		desiredMove = Vector3::Zero;
	}

	switch (_state)
	{
	default:
		break;
	case Air:
		if (desiredMove.LengthSquared() < 0.01)
		{
			break;
		}
		desiredMove.Y = _currentVelocity.Y;
		_currentVelocity = Vector3::MoveTowards(_currentVelocity, desiredMove, _airMovementAcceleration * Time::GetDeltaTime());
		break;
	case Ground:
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
		if (Time::GetGameTime() - _timeJumpLastPressed <= jumpBufferTime)
		{
			Jump();
		}
		break;
	case Air:
		_currentVelocity.Y -= _gravity * Time::GetDeltaTime();
		if (_timeJumpLastPressed == Time::GetGameTime() && Time::GetGameTime() - _timeLastGrounded <= coyoteTime)
		{
			Jump();
		}
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

void PlayerController::Die()
{
	_dead = true;
	GameManager* instance = GameManager::GetInstance();
	if (instance)
	{
		instance->EndGame();
	}
}

void PlayerController::OnTriggerEnter (PhysicsColliderActor* other)
{
	Tag killsOnContactTag = Tags::Get(TEXT("KillsOnContact"));
	if (other->HasTag(killsOnContactTag))
	{
		Die();
	}
}
