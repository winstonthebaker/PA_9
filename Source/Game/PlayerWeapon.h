#pragma once

#include "Engine/Scripting/Script.h"
#include "PlayerController.h"
#include "Engine/Core/Types/LayersMask.h"
#include "Engine/Level/Actor.h"
API_CLASS() class GAME_API PlayerWeapon : public Script
{
	API_AUTO_SERIALIZATION();
	DECLARE_SCRIPTING_TYPE(PlayerWeapon);

	// [Script]

public:
	API_FIELD() float _shotgunRecoil;
	API_FIELD() ScriptingObjectReference<PlayerController> _pc;
	API_FIELD() ScriptingObjectReference<Actor> _shotgun;
	API_FIELD() ScriptingObjectReference<Actor> _pistol;
	API_FIELD() LayersMask _layers;

	API_FIELD() int _pistolAmmo;
	API_FIELD() int _shotgunAmmo;

	API_FIELD() float _pistolVisualRecoilDistance;
	API_FIELD() float _pistolVisualRecoilRotation;
	API_FIELD() float _shotgunVisualRecoilDistance;
	API_FIELD() float _shotgunVisualRecoilRotation;


private:
	void OnEnable() override;
	void OnDisable() override;
	void OnUpdate() override;
	void HandleAttack();

	void PistolRecoil();
	void ShotunRecoil();
	float _timeLastAttack;
	float _timeAttackLastPressed;

	Vector3 _shotgunRestPosition;
	Quaternion _shotgunRestRotation;
	Vector3 _pistolRestPosition;
	Quaternion _pistolRestRotation;

	
};
