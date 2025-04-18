#include "TurretEnemy.h"

TurretEnemy::TurretEnemy(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void TurretEnemy::OnEnable()
{
    // Here you can add code that needs to be called when script is enabled (eg. register for events)
}

void TurretEnemy::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void TurretEnemy::OnUpdate()
{
    // Here you can add code that needs to be called every frame
}
