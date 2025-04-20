#include "Pickup.h"
#include "GameManager.h"
#include "Engine/Level/Actor.h"

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
    GetActor()->SetIsActive(false);
    return _type;
}
