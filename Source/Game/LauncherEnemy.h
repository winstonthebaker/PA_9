#pragma once

#include "Engine/Scripting/Script.h"
#include "Missile.h"
#include "Engine/Content/AssetReference.h"
#include "Engine/Scripting/ScriptingObjectReference.h"

API_CLASS() class GAME_API LauncherEnemy : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(LauncherEnemy);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    Missile* _missile;

    void SpawnMissile();
    float _spawnTimer;


public:
    API_FIELD() AssetReference<Prefab> _missilePrefab;
};
