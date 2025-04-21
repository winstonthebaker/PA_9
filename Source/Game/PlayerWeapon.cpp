#include "PlayerWeapon.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"
#include "Engine/Core/Log.h"
#include "Engine/Physics/Physics.h"
#include "Engine/Debug/DebugDraw.h"
#include "ShotHandler.h"
#include "GameManager.h"

PlayerWeapon::PlayerWeapon(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void PlayerWeapon::HandlePickup(int type)
{
	if (type == 1)
	{
		_pistolAmmo++;
		return;
	}
	if (type == 2)
	{
		_shotgunAmmo++;
		return;
	}
}

void PlayerWeapon::OnEnable()
{
	_pistolStartingAmmo = _pistolAmmo;
	_shotgunStartingAmmo = _shotgunAmmo;
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
	GameManager::GetInstance()->OnReset.Bind<PlayerWeapon, &PlayerWeapon::Reset>(this);
	_pistolHideFactor = 30;
	_shotgunHideFactor = 30;
}

void PlayerWeapon::OnDisable()
{
	GameManager::GetInstance()->OnReset.Unbind<PlayerWeapon, &PlayerWeapon::Reset>(this);

}

void PlayerWeapon::OnUpdate()
{
	if (_pistolAmmo > 0)
	{
		_pistolHideFactor = 0;
	}
	else
	{
		if (_pistolHideFactor < 30)
		{
			_pistolHideFactor += Time::GetDeltaTime() * 60;

		}
	}
	if (_shotgunAmmo > 0)
	{
		_shotgunHideFactor = 0;

	}
	else
	{
		if (_shotgunHideFactor < 30)
		{
			_shotgunHideFactor += Time::GetDeltaTime() * 60;
		}
	}
	
	HandleAttack();
	GameManager* gm = GameManager::GetInstance();
	if (gm)
	{
		gm->SetPistolAmmo(_pistolAmmo);
		gm->SetShotgunAmmo(_shotgunAmmo);
	}
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
				CalculatePistolPosition(),
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
				CalculateShotgunPosition(),
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
		if (_pistolAmmo <= 0)
		{
			return;
		}
		_pistolAmmo--;
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
		if (_shotgunAmmo <= 0)
		{
			return;
		}
		_shotgunAmmo--;
		//shotgun
		_pc->FireShotgun(_shotgunRecoil);
		ShotunRecoil();
	}
}

void PlayerWeapon::Reset()
{
	_pistolAmmo = _pistolStartingAmmo;
	_shotgunAmmo = _shotgunStartingAmmo;
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

Vector3 PlayerWeapon::CalculatePistolPosition()
{
	Vector3 pos = _pistolRestPosition;
	if (_pistolAmmo <= 0)
	{
		pos.Y -= _pistolHideFactor;
	}
	return pos;
}

Vector3 PlayerWeapon::CalculateShotgunPosition()
{
	Vector3 pos = _shotgunRestPosition;
	if (_shotgunAmmo <= 0)
	{
		pos.Y -= _shotgunHideFactor;
	}
	return pos;
}
