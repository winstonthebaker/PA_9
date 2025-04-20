#include "Explodes.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Level/Prefabs/PrefabManager.h"
#include "Engine/Level/Actor.h"

Explodes::Explodes(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Explodes::OnEnable()
{
    // Here you can add code that needs to be called when script is enabled (eg. register for events)
}

void Explodes::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void Explodes::OnUpdate()
{
    // Here you can add code that needs to be called every frame
}

void Explodes::Explode()
{
    PrefabManager::SpawnPrefab(_explosionPrefab, GetActor()->GetPosition());

}
