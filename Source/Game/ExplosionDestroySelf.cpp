#include "ExplosionDestroySelf.h"
#include "Engine/Level/Actor.h"
#include "Engine/Engine/Time.h"
#include "GameManager.h"
ExplosionDestroySelf::ExplosionDestroySelf(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void ExplosionDestroySelf::Reset()
{
    GetActor()->DeleteObject();
}

void ExplosionDestroySelf::OnEnable()
{
    _timeSpawned = Time::GetGameTime();
    GameManager::GetInstance()->OnReset.Bind<ExplosionDestroySelf, &ExplosionDestroySelf::Reset>(this);

}

void ExplosionDestroySelf::OnDisable()
{
    GameManager::GetInstance()->OnReset.Unbind<ExplosionDestroySelf, &ExplosionDestroySelf::Reset>(this);

}

void ExplosionDestroySelf::OnUpdate()
{
    if (Time::GetGameTime() - _timeSpawned > _lifeTime)
    {
        GetActor()->DeleteObject();
    }
}
