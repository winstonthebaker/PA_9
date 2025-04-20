#include "MineSpawner.h"
#include "Engine/Level/Prefabs/PrefabManager.h"
#include "Engine/Engine/Time.h"
#include "MovingEnemy.h"
#include "Engine/Core/Log.h"

MineSpawner::MineSpawner(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void MineSpawner::OnEnable()
{
	_spawnTimer = _spawnTime * _spawnEarly; 
}

void MineSpawner::OnDisable()
{
	// Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void MineSpawner::OnUpdate()
{
	_spawnTimer += Time::GetDeltaTime();
	if (_spawnTimer > _spawnTime)
	{
		SpawnMine();
		_spawnTimer = 0;
	}
}

void MineSpawner::SpawnMine()
{
	if (!_minePrefab)
	{
		LOG_STR(Error, TEXT("No mine prefab"));
		return;
	}
	auto spawn = PrefabManager::SpawnPrefab(_minePrefab, GetActor()->GetPosition());
	if (!spawn)
	{
		LOG_STR(Error, TEXT("mine not found"));
		return;
	}
	auto mover = spawn->GetScript<MovingEnemy>();
	if (mover)
	{
		mover->AddFollowPoint(_mineTarget);
		mover->_moveSpeed = _moveSpeed;
		mover->SetDestroysSelf(true);
	}

}
