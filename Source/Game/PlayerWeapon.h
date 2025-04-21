#pragma once

#include "Engine/Scripting/Script.h"
#include "PlayerController.h"
#include "Engine/Core/Types/LayersMask.h"
#include "Engine/Level/Actor.h"
#include "Engine/Content/AssetReference.h"
#include "Engine/Level/Prefabs/PrefabManager.h"

API_CLASS() class GAME_API PlayerWeapon : public Script
{
	API_AUTO_SERIALIZATION();
	DECLARE_SCRIPTING_TYPE(PlayerWeapon);

	// [Script]

public:
	
	API_FIELD() ScriptingObjectReference<PlayerController> _pc;
	API_FIELD() ScriptingObjectReference<Actor> _shotgun;
	API_FIELD() ScriptingObjectReference<Actor> _pistol;
	API_FIELD() AssetReference<Prefab> _bulletTrailPrefab;

	API_FIELD() LayersMask _layers;

	API_FIELD() int _pistolAmmo = 0; 
	API_FIELD() int _shotgunAmmo = 0;

	API_FIELD() float _pistolVisualRecoilDistance = 10;
	API_FIELD() float _pistolVisualRecoilRotation = 45;
	API_FIELD() float _shotgunVisualRecoilDistance = 15;
	API_FIELD() float _shotgunVisualRecoilRotation = 60;
	void HandlePickup(int type);

private:
	float _shotgunRecoil = 800;
	void OnEnable() override;
	void OnDisable() override;
	void OnUpdate() override;
	void HandleAttack();
	void Reset();
	void PistolRecoil();
	void ShotunRecoil();
	void HandleWeaponVisuals();
	void FirePistol();
	void FireShotgun();

	void SpawnTrail(Vector3 startPoint, Vector3 endPoint);

	float _timeLastAttack;
	float _timeAttackLastPressed;
	int _pistolStartingAmmo;
	int _shotgunStartingAmmo;

	float _pistolHideFactor;
	float _shotgunHideFactor;

	Vector3 _shotgunRestPosition;
	Quaternion _shotgunRestRotation;
	Vector3 _pistolRestPosition;
	Quaternion _pistolRestRotation;

	Vector3 CalculatePistolPosition();
	Vector3 CalculateShotgunPosition();

	
};
