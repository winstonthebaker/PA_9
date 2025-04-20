#include "ShotHandler.h"
#include "Engine/Level/Actor.h"

ShotHandler::ShotHandler(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void ShotHandler::OnEnable()
{
    // Here you can add code that needs to be called when script is enabled (eg. register for events)
}

void ShotHandler::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void ShotHandler::OnUpdate()
{
    // Here you can add code that needs to be called every frame
}

void ShotHandler::TakeShot()
{
    OnShot();
}
