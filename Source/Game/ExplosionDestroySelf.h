#pragma once

#include "Engine/Scripting/Script.h"

API_CLASS() class GAME_API ExplosionDestroySelf : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(ExplosionDestroySelf);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    float _timeSpawned = 0;
public:
    API_FIELD() float _lifeTime = 5;
};
