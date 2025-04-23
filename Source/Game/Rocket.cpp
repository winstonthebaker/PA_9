#include "Rocket.h"
#include "PlayerController.h"
#include <Engine/Engine/Time.h>
#include "Engine/Core/Log.h"
#include "GameManager.h"
#include "ShotHandler.h"
#include "Explodes.h"
Rocket::Rocket(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Rocket::OnEnable()
{
    FindPlayer();
    if (_col)
    {
        _col->TriggerEnter.Bind<Rocket, &Rocket::OnTriggerEnter>(this);
    }

    GameManager::GetInstance()->OnReset.Bind<Rocket, &Rocket::OnReset>(this);
    ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
    if (shotHandler)
    {
        //LOG_STR(Info, TEXT("Bound!"));
        shotHandler->OnShot.Bind<Rocket, &Rocket::GetShot>(this);
    }

}

void Rocket::OnDisable()
{
    if (_col)
    {
        _col->TriggerEnter.UnbindAll();
    }
    GameManager::GetInstance()->OnReset.Unbind<Rocket, &Rocket::OnReset>(this);
    ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
    if (shotHandler)
    {
        shotHandler->OnShot.UnbindAll();
    }
    LOG_STR(Info, TEXT("Rocket destroyed"));
}

void Rocket::OnUpdate()
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
    if (_audioSource)
    {
        float volume  = _audioSource->GetVolume();
        volume = Math::MoveTowards(volume, 0.2f, 0.4f * Time::GetDeltaTime());
        _audioSource->SetVolume(volume);
    }

}

void Rocket::FindPlayer()
{
    if (PlayerController::GetInstance() != nullptr)
    {
        _followPlayer = PlayerController::GetInstance();
    }
}

void Rocket::OnReset()
{
    GetActor()->DeleteObject();

}

void Rocket::GetShot()
{
    GetActor()->DeleteObject();
    Explodes* explodes = GetActor()->GetScript<Explodes>();
    if (explodes)
    {
        explodes->Explode();
    }
}


void Rocket::OnTriggerEnter(PhysicsColliderActor* other)
{
    GetActor()->DeleteObject();
    Explodes* explodes = GetActor()->GetScript<Explodes>();
    if (explodes)
    {
        explodes->Explode();
    }
}

void Rocket::SetInitialVelocity(Vector3 force)
{
    _rb->AddForce(force, ForceMode::VelocityChange);
}
