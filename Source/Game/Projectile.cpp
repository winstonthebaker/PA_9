#include "Projectile.h"
#include "Engine/Engine/Time.h"

Projectile::Projectile(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;

}

void Projectile::OnEnable()
{
    if (_collider)
    {
        _collider->TriggerEnter.Bind<Projectile, &Projectile::OnTriggerEnter>(this);
    }
}

void Projectile::OnDisable()
{
    if (_collider)
    {
        _collider->TriggerEnter.UnbindAll();
    }
}

void Projectile::OnUpdate()
{
    GetActor()->AddMovement(_currentVelocity * Time::GetDeltaTime());
}

void Projectile::OnTriggerEnter(PhysicsColliderActor* other)
{
    GetActor()->DeleteObject();
}

void Projectile::SetVelocity(Vector3 velocity)
{
    _currentVelocity = velocity;
}
