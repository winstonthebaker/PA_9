#pragma once

#include "Engine/Scripting/Script.h"

API_CLASS() class GAME_API PlayerWeapon : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(PlayerWeapon);

    // [Script]

public:
    API_FIELD() float _cooldown;
private:
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    void HandleAttack();

    enum AttackType
    {
        Left,
        Right
    };

    float _timeLastAttack;
    float _timeAttackLastPressed;
    AttackType _lastAttemptedAttack;
};
