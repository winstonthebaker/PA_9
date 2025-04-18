#include "Missile.h"
#include "PlayerController.h"
#include <Engine/Engine/Time.h>
#include "Engine/Core/Log.h"


Missile::Missile(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Missile::OnEnable()
{
    FindPlayer();
    if (_col)
    {
        _col->TriggerEnter.Bind<Missile, &Missile::OnTriggerEnter>(this);
    }
}

void Missile::OnDisable()
{
    if (_col)
    {
        _col->TriggerEnter.UnbindAll();
    }
}

void Missile::OnUpdate()
{
    if (_followPlayer == nullptr)
    {
        FindPlayer();
    }
    if (_followPlayer == nullptr)
    {
        return;
    }
    Vector3 currentPlayerPosition = _followPlayer->GetActor()->GetPosition();
    Vector3 positionDifference = currentPlayerPosition - GetActor()->GetPosition();
    positionDifference = currentPlayerPosition - GetActor()->GetPosition();
    positionDifference.NormalizeFast();

    positionDifference *= _rb->GetLinearVelocity() + _thrustPower;
    Vector3 thrustVector = positionDifference - _rb->GetLinearVelocity();
    thrustVector.NormalizeFast();
       
    _rb->AddForce(thrustVector * _thrustPower); 
    GetActor()->SetOrientation(Quaternion::LookRotation(_rb->GetLinearVelocity(), Vector3::Up)); 

}

void Missile::FindPlayer()
{
    if (PlayerController::GetInstance() != nullptr)
    {
        _followPlayer = PlayerController::GetInstance();
    }
}

void Missile::OnTriggerEnter(PhysicsColliderActor* other)
{
    GetActor()->DeleteObject();
}
