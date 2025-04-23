#include "LauncherEnemy.h"
#include "Engine/Level/Prefabs/PrefabManager.h"
#include "Engine/Engine/Time.h"
#include "GameManager.h"
#include "Rocket.h"

LauncherEnemy::LauncherEnemy(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void LauncherEnemy::OnEnable()
{
    _spawnTimer = _startingTime;
    GameManager::GetInstance()->OnReset.Bind<LauncherEnemy, &LauncherEnemy::Reset>(this);

}

void LauncherEnemy::OnDisable()
{
    GameManager::GetInstance()->OnReset.Bind<LauncherEnemy, &LauncherEnemy::Reset>(this);

}

void LauncherEnemy::OnUpdate()
{
    GameManager* gm = GameManager::GetInstance();
    if (gm)
    {
        if (gm->IsGameOver())
        {
            return;
        }
    }
    _spawnTimer -= Time::GetDeltaTime();
    if (_spawnTimer < 0)
    {
        _spawnTimer = _spawnTime;
       SpawnMissile();
    }
}

void LauncherEnemy::SpawnMissile()
{
    float initialVelocity = 300;
    auto spawn = PrefabManager::SpawnPrefab(_missilePrefab, GetActor()->GetPosition());
    Rocket* rocket = spawn->GetScript<Rocket>();
    if (rocket)
    {
        rocket->SetInitialVelocity(GetActor()->GetOrientation() * Vector3::Up * initialVelocity);
    }
}

void LauncherEnemy::Reset()
{
    _spawnTimer = _startingTime;

}
