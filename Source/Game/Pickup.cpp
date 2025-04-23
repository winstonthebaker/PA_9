#include "Pickup.h"
#include "GameManager.h"
#include "Engine/Level/Actor.h"
#include "PlayerController.h"
#include "Engine/Level/Prefabs/PrefabManager.h"

Pickup::Pickup(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Pickup::OnEnable()
{

}

void Pickup::OnDisable()
{

}

void Pickup::OnUpdate()
{
    
}

void Pickup::Reset()
{
    GetActor()->SetIsActive(true);
}

void Pickup::OnStart()
{
    GameManager::GetInstance()->OnReset.Bind<Pickup, &Pickup::Reset>(this);
}

void Pickup::OnDestroy()
{
    GameManager::GetInstance()->OnReset.Unbind<Pickup, &Pickup::Reset>(this);
}

int Pickup::Grab()
{
    if (_audioSource)
    {
        PrefabManager::SpawnPrefab(_audioSource, GetActor()->GetPosition());

    }

    PlayerController* pc = PlayerController::GetInstance();
    if (pc)
    {
        pc->HandlePickup(_type);
    }
    OnGrabbed();
    GetActor()->SetIsActive(false);
    return _type;
}
