#include "Mine.h"
#include "Engine/Engine/Time.h"

Mine::Mine(const SpawnParams& params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Mine::OnEnable()
{
    GameManager::GetInstance()->OnReset.Bind<Mine, &Mine::OnReset>(this);
    if (_col)
    {
        _col->TriggerEnter.Bind<Mine, &Mine::OnTriggerEnter>(this);
    }
}

void Mine::OnDisable()
{
    GameManager::GetInstance()->OnReset.Unbind<Mine, &Mine::OnReset>(this);
    if (_col)
    {
        _col->TriggerEnter.Bind<Mine, &Mine::OnTriggerEnter>(this);
    }

}

void Mine::OnUpdate()
{
    if (!_target)
    {
        return;
    }

    if (!_hasReachedTarget)
    {
        Vector3 dirToTarget = _target->GetPosition() - GetActor()->GetPosition();

        float dist = dirToTarget.Length();
        dirToTarget.Normalize();
        float moveDist = _moveSpeed * Time::GetDeltaTime();
        dirToTarget *= moveDist;

        if (dist < moveDist)
        {
            _hasReachedTarget = true;
        }
        GetActor()->AddMovement(dirToTarget);
    }
    else
    {
        if (_doesDisappear)
        {
            GetActor()->DeleteObject();
        }

    }
}

void Mine::OnReset()
{
    GetActor()->DeleteObject();
}



void Mine::SetTarget(Actor* target)
{
    _target = target;
}

void Mine::SetMoveSpeed(float moveSpeed)
{
    _moveSpeed = moveSpeed;
}

void Mine::SetDoesDisappear(bool doesDisappear)
{
    _doesDisappear = doesDisappear;
}

void Mine::OnTriggerEnter(PhysicsColliderActor* other)
{
    GetActor()->DeleteObject();

}