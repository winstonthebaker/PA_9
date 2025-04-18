// This code was auto-generated. Do not modify it.

#include "Engine/Core/Compiler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
#include "Engine/Scripting/Scripting.h"
#include "Engine/Scripting/Internal/InternalCalls.h"
#include "Engine/Scripting/ManagedCLR/MUtils.h"
#include "Engine/Scripting/ManagedCLR/MCore.h"
#include "Game.Gen.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Level\Actor.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Level\Actors\Camera.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Physics\Colliders\CharacterController.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Scripting\ScriptingObjectReference.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\GameManager.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\ICanTakeDamage.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\PlayerController.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\PlayerWeapon.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\TestScript.h"
#include "Engine/Scripting/ManagedCLR/MClass.h"
#include "Engine/Scripting/ManagedCLR/MMethod.h"
#include "Engine/Serialization/Serialization.h"

void GameManager::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(GameManager);
    SERIALIZE(_deathScreenActor);
}

void GameManager::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_deathScreenActor);
}

class GameManagerInternal
{
public:
    DLLEXPORT static MObject* Get_deathScreenActor(GameManager* __obj)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Get_deathScreenActor")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_deathScreenActor.GetManagedInstance();
    }

    DLLEXPORT static void Set_deathScreenActor(GameManager* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Set_deathScreenActor")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_deathScreenActor = value;
    }


    static void SetupScriptVTable(MClass* mclass, void**& scriptVTable, void**& scriptVTableBase)
    {
        if (!scriptVTable)
        {
            scriptVTable = (void**)Platform::Allocate(sizeof(void*) * 15, 16);
            Platform::MemoryClear(scriptVTable, sizeof(void*) * 15);
            scriptVTableBase = (void**)Platform::Allocate(sizeof(void*) * 16, 16);
        }
    }

    static void SetupScriptObjectVTable(void** scriptVTable, void** scriptVTableBase, void** vtable, int32 entriesCount, int32 wrapperIndex)
    {
    }

    static void InitRuntime()
    {
    }

};

ScriptingTypeInitializer GameManager::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.GameManager", 16), sizeof(GameManager), &GameManagerInternal::InitRuntime, (ScriptingType::SpawnHandler)&GameManager::Spawn, &Script::TypeInitializer, &GameManagerInternal::SetupScriptVTable, &GameManagerInternal::SetupScriptObjectVTable, nullptr);

void ICanTakeDamage::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(ICanTakeDamage);
}

void ICanTakeDamage::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
}

class ICanTakeDamageInternal
{
public:

    static void SetupScriptVTable(MClass* mclass, void**& scriptVTable, void**& scriptVTableBase)
    {
        if (!scriptVTable)
        {
            scriptVTable = (void**)Platform::Allocate(sizeof(void*) * 15, 16);
            Platform::MemoryClear(scriptVTable, sizeof(void*) * 15);
            scriptVTableBase = (void**)Platform::Allocate(sizeof(void*) * 16, 16);
        }
    }

    static void SetupScriptObjectVTable(void** scriptVTable, void** scriptVTableBase, void** vtable, int32 entriesCount, int32 wrapperIndex)
    {
    }

    static void InitRuntime()
    {
    }

};

ScriptingTypeInitializer ICanTakeDamage::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.ICanTakeDamage", 19), sizeof(ICanTakeDamage), &ICanTakeDamageInternal::InitRuntime, (ScriptingType::SpawnHandler)&ICanTakeDamage::Spawn, &Script::TypeInitializer, &ICanTakeDamageInternal::SetupScriptVTable, &ICanTakeDamageInternal::SetupScriptObjectVTable, nullptr);

void PlayerController::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(PlayerController);
    SERIALIZE(_characterController);
    SERIALIZE(_cameraContainer);
    SERIALIZE(_playerBody);
    SERIALIZE(_movementSpeed);
    SERIALIZE(_airMovementAcceleration);
    SERIALIZE(_groundMovementAcceleration);
    SERIALIZE(_gravity);
    SERIALIZE(_rotationSmoothing);
    SERIALIZE(_jumpSpeed);
}

void PlayerController::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_characterController);
    DESERIALIZE(_cameraContainer);
    DESERIALIZE(_playerBody);
    DESERIALIZE(_movementSpeed);
    DESERIALIZE(_airMovementAcceleration);
    DESERIALIZE(_groundMovementAcceleration);
    DESERIALIZE(_gravity);
    DESERIALIZE(_rotationSmoothing);
    DESERIALIZE(_jumpSpeed);
}

class PlayerControllerInternal
{
public:
    DLLEXPORT static MObject* Get_characterController(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_characterController")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_characterController.GetManagedInstance();
    }

    DLLEXPORT static void Set_characterController(PlayerController* __obj, CharacterController* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_characterController")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_characterController = value;
    }

    DLLEXPORT static MObject* Get_cameraContainer(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_cameraContainer")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_cameraContainer.GetManagedInstance();
    }

    DLLEXPORT static void Set_cameraContainer(PlayerController* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_cameraContainer")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_cameraContainer = value;
    }

    DLLEXPORT static MObject* Get_playerBody(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_playerBody")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_playerBody.GetManagedInstance();
    }

    DLLEXPORT static void Set_playerBody(PlayerController* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_playerBody")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_playerBody = value;
    }

    DLLEXPORT static float Get_movementSpeed(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_movementSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_movementSpeed;
    }

    DLLEXPORT static void Set_movementSpeed(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_movementSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_movementSpeed = value;
    }

    DLLEXPORT static float Get_airMovementAcceleration(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_airMovementAcceleration")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_airMovementAcceleration;
    }

    DLLEXPORT static void Set_airMovementAcceleration(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_airMovementAcceleration")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_airMovementAcceleration = value;
    }

    DLLEXPORT static float Get_groundMovementAcceleration(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_groundMovementAcceleration")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_groundMovementAcceleration;
    }

    DLLEXPORT static void Set_groundMovementAcceleration(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_groundMovementAcceleration")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_groundMovementAcceleration = value;
    }

    DLLEXPORT static float Get_gravity(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_gravity")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_gravity;
    }

    DLLEXPORT static void Set_gravity(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_gravity")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_gravity = value;
    }

    DLLEXPORT static float Get_rotationSmoothing(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_rotationSmoothing")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_rotationSmoothing;
    }

    DLLEXPORT static void Set_rotationSmoothing(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_rotationSmoothing")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_rotationSmoothing = value;
    }

    DLLEXPORT static float Get_jumpSpeed(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_jumpSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_jumpSpeed;
    }

    DLLEXPORT static void Set_jumpSpeed(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_jumpSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_jumpSpeed = value;
    }


    static void SetupScriptVTable(MClass* mclass, void**& scriptVTable, void**& scriptVTableBase)
    {
        if (!scriptVTable)
        {
            scriptVTable = (void**)Platform::Allocate(sizeof(void*) * 15, 16);
            Platform::MemoryClear(scriptVTable, sizeof(void*) * 15);
            scriptVTableBase = (void**)Platform::Allocate(sizeof(void*) * 16, 16);
        }
    }

    static void SetupScriptObjectVTable(void** scriptVTable, void** scriptVTableBase, void** vtable, int32 entriesCount, int32 wrapperIndex)
    {
    }

    static void InitRuntime()
    {
    }

};

ScriptingTypeInitializer PlayerController::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.PlayerController", 21), sizeof(PlayerController), &PlayerControllerInternal::InitRuntime, (ScriptingType::SpawnHandler)&PlayerController::Spawn, &Script::TypeInitializer, &PlayerControllerInternal::SetupScriptVTable, &PlayerControllerInternal::SetupScriptObjectVTable, nullptr);

void PlayerWeapon::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(PlayerWeapon);
    SERIALIZE(_cooldown);
}

void PlayerWeapon::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_cooldown);
}

class PlayerWeaponInternal
{
public:
    DLLEXPORT static float Get_cooldown(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_cooldown")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_cooldown;
    }

    DLLEXPORT static void Set_cooldown(PlayerWeapon* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_cooldown")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_cooldown = value;
    }


    static void SetupScriptVTable(MClass* mclass, void**& scriptVTable, void**& scriptVTableBase)
    {
        if (!scriptVTable)
        {
            scriptVTable = (void**)Platform::Allocate(sizeof(void*) * 15, 16);
            Platform::MemoryClear(scriptVTable, sizeof(void*) * 15);
            scriptVTableBase = (void**)Platform::Allocate(sizeof(void*) * 16, 16);
        }
    }

    static void SetupScriptObjectVTable(void** scriptVTable, void** scriptVTableBase, void** vtable, int32 entriesCount, int32 wrapperIndex)
    {
    }

    static void InitRuntime()
    {
    }

};

ScriptingTypeInitializer PlayerWeapon::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.PlayerWeapon", 17), sizeof(PlayerWeapon), &PlayerWeaponInternal::InitRuntime, (ScriptingType::SpawnHandler)&PlayerWeapon::Spawn, &Script::TypeInitializer, &PlayerWeaponInternal::SetupScriptVTable, &PlayerWeaponInternal::SetupScriptObjectVTable, nullptr);

void TestScript::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(TestScript);
    SERIALIZE(MoveSpeed);
    SERIALIZE(Gravity);
    SERIALIZE(RotationSpeed);
    SERIALIZE(Controller);
    SERIALIZE(PlayerCamera);
}

void TestScript::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(MoveSpeed);
    DESERIALIZE(Gravity);
    DESERIALIZE(RotationSpeed);
    DESERIALIZE(Controller);
    DESERIALIZE(PlayerCamera);
}

class TestScriptInternal
{
public:
    DLLEXPORT static float GetMoveSpeed(TestScript* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_GetMoveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->MoveSpeed;
    }

    DLLEXPORT static void SetMoveSpeed(TestScript* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_SetMoveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->MoveSpeed = value;
    }

    DLLEXPORT static float GetGravity(TestScript* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_GetGravity")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->Gravity;
    }

    DLLEXPORT static void SetGravity(TestScript* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_SetGravity")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->Gravity = value;
    }

    DLLEXPORT static float GetRotationSpeed(TestScript* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_GetRotationSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->RotationSpeed;
    }

    DLLEXPORT static void SetRotationSpeed(TestScript* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_SetRotationSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->RotationSpeed = value;
    }

    DLLEXPORT static MObject* GetController(TestScript* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_GetController")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->Controller.GetManagedInstance();
    }

    DLLEXPORT static void SetController(TestScript* __obj, CharacterController* value)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_SetController")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->Controller = value;
    }

    DLLEXPORT static MObject* GetPlayerCamera(TestScript* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_GetPlayerCamera")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->PlayerCamera.GetManagedInstance();
    }

    DLLEXPORT static void SetPlayerCamera(TestScript* __obj, Camera* value)
    {
        MSVC_FUNC_EXPORT("Game.TestScript::Internal_SetPlayerCamera")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->PlayerCamera = value;
    }


    static void SetupScriptVTable(MClass* mclass, void**& scriptVTable, void**& scriptVTableBase)
    {
        if (!scriptVTable)
        {
            scriptVTable = (void**)Platform::Allocate(sizeof(void*) * 15, 16);
            Platform::MemoryClear(scriptVTable, sizeof(void*) * 15);
            scriptVTableBase = (void**)Platform::Allocate(sizeof(void*) * 16, 16);
        }
    }

    static void SetupScriptObjectVTable(void** scriptVTable, void** scriptVTableBase, void** vtable, int32 entriesCount, int32 wrapperIndex)
    {
    }

    static void InitRuntime()
    {
    }

};

ScriptingTypeInitializer TestScript::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.TestScript", 15), sizeof(TestScript), &TestScriptInternal::InitRuntime, (ScriptingType::SpawnHandler)&TestScript::Spawn, &Script::TypeInitializer, &TestScriptInternal::SetupScriptVTable, &TestScriptInternal::SetupScriptObjectVTable, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
