#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Core/Collections/Array.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Level/Actor.h"

API_CLASS() class GAME_API MovingEnemy : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(MovingEnemy);

public:
    API_FIELD() Array<ScriptingObjectReference<Actor>> _followPoints; 
    API_FIELD() float _moveSpeed = 1000.0;

    void SetDestroysSelf(bool destroysSelf);
    void SetFollowPoints(const Array<ScriptingObjectReference<Actor>>& points);
    void AddFollowPoint(const ScriptingObjectReference<Actor>& newPoint);
    void OnReset();
private:
    int _currentFollowPointIndex = 0;
    bool _destroysSelf = false;
    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
};
