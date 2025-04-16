#include "TestScript.h"
#include "Engine/Core/Log.h"
#include "Engine/Input/Input.h"
#include "Engine/Level/Actors/Camera.h"
#include "Engine/Engine/Time.h"
TestScript::TestScript(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void TestScript::OnStart()
{
	Float3 eulerAngles = GetActor()->GetOrientation().GetEuler();
	yaw = eulerAngles.Y;
}

void TestScript::OnEnable()
{

}

void TestScript::OnDisable()
{
	// Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void TestScript::OnUpdate()
{
	HandleMovement();
}

void TestScript::HandleMovement()
{
	if (!PlayerCamera || !Controller)
	{
		return;
	}
	Float2 MouseDelta = Float2(Input::GetAxis(TEXT("Mouse X")), Input::GetAxis(TEXT("Mouse Y")));
	pitch = Math::Clamp(pitch + MouseDelta.Y, -88.0f, 88.0f);
	yaw += MouseDelta.X;

	if (yaw > 360.0f)
	{
		yaw -= 360.0f;
	}
	if (yaw < -360.0f)
	{
		yaw += 360.0f;
	}

	Float3 currentRotationEuler = GetActor()->GetOrientation().GetEuler();
	currentRotationEuler.Y = yaw;
	GetActor()->SetOrientation(Quaternion::Euler(currentRotationEuler));

	currentRotationEuler.Y = 0.0f;
	currentRotationEuler.X = pitch;
	PlayerCamera->SetLocalOrientation(Quaternion::Euler(currentRotationEuler));

	float forward = Input::GetAxis(TEXT("Vertical"));
	float right = Input::GetAxis(TEXT("Horizontal"));

	bool attemptedJump = Input::GetKeyDown(KeyboardKeys::Spacebar);


	Transform transform = GetActor()->GetTransform();

	Vector3 moveDirection = Vector3::Zero;
	moveDirection += transform.GetForward() * forward;
	moveDirection += transform.GetRight() * right;
	moveDirection.Normalize();
	
	


	Vector3 velocity = moveDirection * MoveSpeed;
	

	if (!Controller->IsGrounded())
	{
		fallVelocity += Gravity * Time::GetDeltaTime();
		Vector3 gravityFactor = Vector3::Down * fallVelocity;
		velocity += gravityFactor;
	}
	else
	{
		fallVelocity = 0.0f;
	}

	Controller->Move(velocity * Time::GetDeltaTime());
}

void TestScript::HandleCamera()
{

}
