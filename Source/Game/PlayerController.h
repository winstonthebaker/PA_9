#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Physics/Colliders/CharacterController.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "ICanReset.h"
#include "Engine/Physics/Colliders/Collider.h"

API_CLASS() class GAME_API PlayerController : public Script, ICanReset
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(PlayerController);

public:
    API_FIELD() ScriptingObjectReference<CharacterController> _characterController;
    API_FIELD() ScriptingObjectReference<Actor> _cameraContainer;
    API_FIELD() ScriptingObjectReference<Actor> _playerBody;

    API_FIELD() float _movementSpeed = 600.0;
    API_FIELD() float _airMovementAcceleration = 1000.0;
    API_FIELD() float _groundMovementAcceleration = 2000.0;
    API_FIELD() float _gravity = 1000.0;
    API_FIELD() float _rotationSmoothing = 20.0;
    API_FIELD() float _jumpSpeed = 1000.0;
    // [Script]


private:
    void OnEnable() override;
    void OnDisable() override;

    void OnUpdate() override;
    void OnStart() override;
    void Reset() override;

    enum State
    {
        Air,
        Ground
    };

    Vector3 _currentVelocity = Vector3::Zero;

    float _bodyRotation = 0;
    float _startingBodyRotation = 0;

    float _cameraPitch = 0;
    float _startingCameraPitch = 0;

    Vector3 _startingPosition = { 0.0,0.0,0.0 };

    float _timeLastGrounded = -9999.9;
    float _timeJumpLastPressed = -9999.9;
    State _state = Air;

    bool _dead = false;

    void HandleMovement();
    void EvaluateState();
    void PitchCamera();
    void RotateBody();
    void HandleHorizontalMovement();
    void HandleVerticalMovement();
    void ApplyMovement();

    void Jump();

    void Die();

    void OnTriggerEnter(PhysicsColliderActor* other);
};
