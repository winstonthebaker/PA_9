#include "PlayerWeapon.h"
#include "Engine/Input/Input.h"
#include "Engine/Engine/Time.h"

PlayerWeapon::PlayerWeapon(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void PlayerWeapon::OnEnable()
{
    // Here you can add code that needs to be called when script is enabled (eg. register for events)
}

void PlayerWeapon::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void PlayerWeapon::OnUpdate()
{
    HandleAttack();
}

void PlayerWeapon::HandleAttack()
{

}
