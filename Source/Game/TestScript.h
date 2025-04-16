#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Physics/Colliders/CharacterController.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Level/Actors/Camera.h"

API_CLASS() class GAME_API TestScript : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(TestScript);

public:
    API_FIELD() float MoveSpeed = 600.0f;
    API_FIELD() float Gravity = 980.0f;

    API_FIELD() float RotationSpeed = 10.0f; 
    API_FIELD() ScriptingObjectReference<CharacterController> Controller;
    API_FIELD() ScriptingObjectReference<Camera> PlayerCamera;

protected:
    // [Script]
    void OnStart() override;
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;

    void HandleMovement();
    void HandleCamera();

private:
    float pitch = 0.0f;
    float yaw = 0.0f;
    float fallVelocity = 0.0f;
    float lastJumpPress = 0.0f;
};
