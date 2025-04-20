#pragma once

#include "Engine/Scripting/Script.h"

API_CLASS() class GAME_API Pickup : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(Pickup);

    // [Script]
    void OnEnable() override;
    void OnDisable() override;
    void OnUpdate() override;
    void Reset();
    void OnStart() override;
    void OnDestroy() override;
public:
    API_FIELD() int _type;
    //because enums are fucked
    //0 is time
    //1 is pistol
    //2 is shotgun
    int Grab();

};
