﻿#include "ICanTakeDamage.h"

ICanTakeDamage::ICanTakeDamage(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void ICanTakeDamage::OnEnable()
{
    // Here you can add code that needs to be called when script is enabled (eg. register for events)
}

void ICanTakeDamage::OnDisable()
{
    // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void ICanTakeDamage::OnUpdate()
{
    // Here you can add code that needs to be called every frame
}
