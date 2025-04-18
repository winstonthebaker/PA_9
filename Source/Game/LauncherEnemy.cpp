#include "LauncherEnemy.h"
#include "Engine/Level/Prefabs/PrefabManager.h"
#include "Engine/Engine/Time.h"

LauncherEnemy::LauncherEnemy(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void LauncherEnemy::OnEnable()
{
    _missile = nullptr;
}

void LauncherEnemy::OnDisable()
{
}

void LauncherEnemy::OnUpdate()
{
    _spawnTimer -= Time::GetDeltaTime();
    if (_spawnTimer < 0)
    {
        _spawnTimer = 1;
        SpawnMissile();
    }
}

void LauncherEnemy::SpawnMissile()
{
    PrefabManager::SpawnPrefab(_missilePrefab, GetActor()->GetPosition());
}
