#include "PlayerWeapon.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"
#include "Engine/Core/Log.h"
#include "Engine/Physics/Physics.h"
#include "Engine/Debug/DebugDraw.h"
#include "ShotHandler.h"

PlayerWeapon::PlayerWeapon(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void PlayerWeapon::OnEnable()
{
	if (_shotgun)
	{
		_shotgunRestPosition = _shotgun->GetLocalPosition();
		_shotgunRestRotation = _shotgun->GetLocalOrientation();
	}
	if (_pistol)
	{
		_pistolRestPosition = _pistol->GetLocalPosition();
		_pistolRestRotation = _pistol->GetLocalOrientation();
	}
}

void PlayerWeapon::OnDisable()
{
	// Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void PlayerWeapon::OnUpdate()
{
	HandleAttack();

	float rotationSmoothing = 20;
	float factor = rotationSmoothing * Time::GetDeltaTime();
	if (_pistol)
	{
		_pistol->SetLocalOrientation(
			Quaternion::Lerp(
				_pistol->GetLocalOrientation(),
				_pistolRestRotation,
				factor
			));

		_pistol->SetLocalPosition(
			Vector3::Lerp(
				_pistol->GetLocalPosition(),
				_pistolRestPosition,
				factor
			)
		);
	}
	if (_shotgun)
	{
		_shotgun->SetLocalOrientation(
			Quaternion::Lerp(
				_shotgun->GetLocalOrientation(),
				_shotgunRestRotation,
				factor
			));
		_shotgun->SetLocalPosition(
			Vector3::Lerp(
				_shotgun->GetLocalPosition(),
				_shotgunRestPosition,
				factor
			));
	}
}


void PlayerWeapon::HandleAttack()
{
	if (!_pc)
	{
		return;
	}
	if (Input::GetMouseButtonDown(MouseButton::Left))
	{
		PistolRecoil();
		//pistol
		RayCastHit hit;
		if (Physics::RayCast(_pc->GetCameraPosition(), _pc->GetCameraOrientation() * Vector3::Forward, hit, MAX_float, _layers))
		{
			Actor* current = hit.Collider;
			while (current)
			{
				ShotHandler* shotHandler = current->GetScript<ShotHandler>();
				if (shotHandler)
				{
					shotHandler->TakeShot();
				}

				if (current->HasParent())
				{
					current = current->GetParent();
				}
				else
				{
					break;
				}
			}
			DEBUG_DRAW_SPHERE(BoundingSphere(hit.Point, 50), Color::Red, 0.0f, true);
		}
	}
	if (Input::GetMouseButtonDown(MouseButton::Right))
	{
		//shotgun
		_pc->FireShotgun(_shotgunRecoil);
		ShotunRecoil();
	}
}

void PlayerWeapon::PistolRecoil()
{
	Quaternion recoilRot = Quaternion::Euler(Vector3(-_pistolVisualRecoilRotation, 0, 0));
	if (_pistol)
	{
		_pistol->SetLocalOrientation(_pistol->GetLocalOrientation() + recoilRot);
		_pistol->SetLocalPosition(_pistol->GetLocalPosition() + Vector3(0, 0, -_pistolVisualRecoilDistance));
	}
}

void PlayerWeapon::ShotunRecoil()
{
	Quaternion recoilRot = Quaternion::Euler(Vector3(-_shotgunVisualRecoilRotation, 0, 0));
	if (_shotgun)
	{
		_shotgun->SetLocalOrientation(_shotgun->GetLocalOrientation() + recoilRot);
		_shotgun->SetLocalPosition(_shotgun->GetLocalPosition() + Vector3(0, 0, -_shotgunVisualRecoilDistance));
	}
}
