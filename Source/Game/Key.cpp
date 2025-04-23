#include "Key.h"
#include "Pickup.h"
#include "Engine/Level/Actor.h"
Key::Key(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}


void Key::Open()
{
    if (_door)
    {
        _door->Open();
    }
}

void Key::OnStart()
{
    Pickup* pickup = GetActor()->GetScript<Pickup>();
    if (pickup)
    {
        pickup->OnGrabbed.Bind<Key, &Key::Open>(this);
    }
}

void Key::OnDestroy()
{
    Pickup* pickup = GetActor()->GetScript<Pickup>();
    if (pickup)
    {
        pickup->OnGrabbed.Unbind<Key, &Key::Open>(this);
    }
}
