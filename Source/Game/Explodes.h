#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Content/AssetReference.h"

API_CLASS() class GAME_API Explodes : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(Explodes);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
public:
    void Explode();
    API_FIELD() AssetReference<Prefab> _explosionPrefab;
};
