#include "ExplosionDestroySelf.h"
#include "Engine/Level/Actor.h"
#include "Engine/Engine/Time.h"

ExplosionDestroySelf::ExplosionDestroySelf(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void ExplosionDestroySelf::OnEnable()
{
    _timeSpawned = Time::GetGameTime();
}

void ExplosionDestroySelf::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void ExplosionDestroySelf::OnUpdate()
{
    if (Time::GetGameTime() - _timeSpawned > _lifeTime)
    {
        GetActor()->DeleteObject();
    }
}
