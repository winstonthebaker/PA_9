#include "Door.h"
#include "GameManager.h"
#include <Engine/Engine/Time.h>
#include "Engine/Level/Prefabs/PrefabManager.h"

Door::Door(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}



void Door::OnStart()
{
    GameManager::GetInstance()->OnReset.Bind<Door, &Door::Reset>(this);
}

void Door::OnDestroy()
{
    GameManager::GetInstance()->OnReset.Unbind<Door, &Door::Reset>(this);
}

void Door::OnUpdate()
{
    if (!_isOpening)
    {
        return;
    }
    Vector3 scale = _doorTransform->GetLocalScale();
    double currentY = scale.Y;
    currentY = Math::MoveTowards(currentY, 0.0, ((1.0 / _timeToOpen) * Time::GetDeltaTime()));
    _doorTransform->SetLocalScale(Vector3(scale.X, currentY, scale.Z));
    if (currentY <= 0.01)
    {
        _isOpening = false;
        GetActor()->SetIsActive(false);
    }
}

void Door::Open()
{
    if (_audioSource)
    {
        PrefabManager::SpawnPrefab(_audioSource, GetActor()->GetPosition());

    }
    _isOpening = true;
}

void Door::Reset()
{
    _isOpening = false;
    _doorTransform->SetLocalScale(Vector3::One);
    GetActor()->SetIsActive(true);

}
