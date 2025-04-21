#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Level/Actor.h"
API_CLASS() class GAME_API RotateObject : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(RotateObject);

    // [Script]

    void OnUpdate() override;
    void Rotate();
public:
    API_FIELD() float _rotationSpeed = 0;
    API_FIELD() Vector3 _rotationAxis = Vector3(0,1,0);
};
