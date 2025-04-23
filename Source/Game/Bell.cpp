#include "Bell.h"
#include "GameManager.h"
#include "Engine/Level/Actor.h"
#include "ShotHandler.h"
#include "Engine/Level/Prefabs/PrefabManager.h"

Bell::Bell(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void Bell::OnEnable()
{
    ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
    if (shotHandler)
    {
        //LOG_STR(Info, TEXT("Bound!"));
        shotHandler->OnShot.Bind<Bell, &Bell::Ring>(this);
    }

}

void Bell::OnDisable()
{
    ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
    if (shotHandler)
    {
        shotHandler->OnShot.UnbindAll();
    }
}

void Bell::OnUpdate()
{
    // Here you can add code that needs to be called every frame
}

void Bell::OnStart()
{
    GameManager::GetInstance()->OnReset.Bind<Bell, &Bell::Reset>(this);
}

void Bell::OnDestroy()
{
    GameManager::GetInstance()->OnReset.Unbind<Bell, &Bell::Reset>(this);
}

void Bell::Reset()
{
    GetActor()->SetIsActive(true);
}

void Bell::Ring()
{
    if (_audioSource)
    {
        PrefabManager::SpawnPrefab(_audioSource, GetActor()->GetPosition());

    }
    if (_pickup)
    {
        _pickup->Grab();
    }
    GetActor()->SetIsActive(false);
}
