#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Level/Actor.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Physics/Actors/RigidBody.h"
#include "PlayerController.h"
#include "Engine/Physics/Colliders/Collider.h"

API_CLASS() class GAME_API Missile : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(Missile);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    PlayerController* _followPlayer = nullptr;
    void FindPlayer();


public:
    API_FIELD() ScriptingObjectReference<RigidBody> _rb;
    API_FIELD() ScriptingObjectReference<Collider> _col;
    API_FIELD() float _thrustPower;

    void OnTriggerEnter(PhysicsColliderActor* other);

};
