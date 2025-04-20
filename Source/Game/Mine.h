#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Level/Actor.h"
#include "Engine/Scripting/ScriptingObject.h"
#include "GameManager.h"
#include "Engine/Physics/Colliders/Collider.h"



API_CLASS() class GAME_API Mine : public Script
{
    API_AUTO_SERIALIZATION();
    DECLARE_SCRIPTING_TYPE(Mine);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    void OnReset();

public:
    void SetTarget(Actor* target);
    void SetMoveSpeed(float moveSpeed);
    void SetDoesDisappear(bool doesDisappear);
    API_FIELD() ScriptingObjectReference<Collider> _col;


private:
    bool _hasReachedTarget = false;
    Actor* _target;
    float _moveSpeed = 500.0f;

    bool _doesDisappear;

    void OnTriggerEnter(PhysicsColliderActor* other);

};
