// This code was auto-generated. Do not modify it.

#include "Engine/Core/Compiler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
#include "Engine/Scripting/Scripting.h"
#include "Engine/Scripting/Internal/InternalCalls.h"
#include "Engine/Scripting/ManagedCLR/MUtils.h"
#include "Engine/Scripting/ManagedCLR/MCore.h"
#include "Game.Gen.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Audio\AudioSource.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Content\AssetReference.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Core\Collections\Array.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Core\Types\BaseTypes.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Core\Types\LayersMask.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Level\Actor.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Level\Prefabs\Prefab.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Physics\Actors\RigidBody.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Physics\Colliders\CharacterController.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Physics\Colliders\Collider.h"
#include "C:\Program Files (x86)\Flax\Flax_1.9\Source\Engine\Scripting\ScriptingObjectReference.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Bell.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Door.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Explodes.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\ExplosionDestroySelf.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\FloatingMine.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\GameManager.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Key.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\LauncherEnemy.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\MineSpawner.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\MovingEnemy.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Pickup.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\PlayerController.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\PlayerWeapon.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Projectile.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\Rocket.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\RotateObject.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\ShotHandler.h"
#include "C:\Users\winst\OneDrive\Documents\Flax Projects\PA_9\Source\Game\TurretEnemy.h"
#include "Engine/Scripting/ManagedCLR/MClass.h"
#include "Engine/Scripting/ManagedCLR/MMethod.h"
#include "Engine/Serialization/Serialization.h"

void Bell::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Bell);
    SERIALIZE(_pickup);
    SERIALIZE(_audioSource);
}

void Bell::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_pickup);
    DESERIALIZE(_audioSource);
}

class BellInternal
{
public:
    DLLEXPORT static MObject* Get_pickup(Bell* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Bell::Internal_Get_pickup")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pickup.GetManagedInstance();
    }

    DLLEXPORT static void Set_pickup(Bell* __obj, Pickup* value)
    {
        MSVC_FUNC_EXPORT("Game.Bell::Internal_Set_pickup")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pickup = value;
    }

    DLLEXPORT static MObject* Get_audioSource(Bell* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Bell::Internal_Get_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_audioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_audioSource(Bell* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.Bell::Internal_Set_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_audioSource = value;
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

ScriptingTypeInitializer Bell::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Bell", 9), sizeof(Bell), &BellInternal::InitRuntime, (ScriptingType::SpawnHandler)&Bell::Spawn, &Script::TypeInitializer, &BellInternal::SetupScriptVTable, &BellInternal::SetupScriptObjectVTable, nullptr);

void Door::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Door);
    SERIALIZE(_doorTransform);
    SERIALIZE(_audioSource);
}

void Door::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_doorTransform);
    DESERIALIZE(_audioSource);
}

class DoorInternal
{
public:
    DLLEXPORT static MObject* Get_doorTransform(Door* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Door::Internal_Get_doorTransform")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_doorTransform.GetManagedInstance();
    }

    DLLEXPORT static void Set_doorTransform(Door* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.Door::Internal_Set_doorTransform")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_doorTransform = value;
    }

    DLLEXPORT static MObject* Get_audioSource(Door* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Door::Internal_Get_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_audioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_audioSource(Door* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.Door::Internal_Set_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_audioSource = value;
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

ScriptingTypeInitializer Door::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Door", 9), sizeof(Door), &DoorInternal::InitRuntime, (ScriptingType::SpawnHandler)&Door::Spawn, &Script::TypeInitializer, &DoorInternal::SetupScriptVTable, &DoorInternal::SetupScriptObjectVTable, nullptr);

void Explodes::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Explodes);
    SERIALIZE(_explosionPrefab);
}

void Explodes::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_explosionPrefab);
}

class ExplodesInternal
{
public:
    DLLEXPORT static MObject* Get_explosionPrefab(Explodes* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Explodes::Internal_Get_explosionPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_explosionPrefab.GetManagedInstance();
    }

    DLLEXPORT static void Set_explosionPrefab(Explodes* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.Explodes::Internal_Set_explosionPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_explosionPrefab = value;
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

ScriptingTypeInitializer Explodes::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Explodes", 13), sizeof(Explodes), &ExplodesInternal::InitRuntime, (ScriptingType::SpawnHandler)&Explodes::Spawn, &Script::TypeInitializer, &ExplodesInternal::SetupScriptVTable, &ExplodesInternal::SetupScriptObjectVTable, nullptr);

void ExplosionDestroySelf::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(ExplosionDestroySelf);
    SERIALIZE(_lifeTime);
}

void ExplosionDestroySelf::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_lifeTime);
}

class ExplosionDestroySelfInternal
{
public:
    DLLEXPORT static float Get_lifeTime(ExplosionDestroySelf* __obj)
    {
        MSVC_FUNC_EXPORT("Game.ExplosionDestroySelf::Internal_Get_lifeTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_lifeTime;
    }

    DLLEXPORT static void Set_lifeTime(ExplosionDestroySelf* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.ExplosionDestroySelf::Internal_Set_lifeTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_lifeTime = value;
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

ScriptingTypeInitializer ExplosionDestroySelf::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.ExplosionDestroySelf", 25), sizeof(ExplosionDestroySelf), &ExplosionDestroySelfInternal::InitRuntime, (ScriptingType::SpawnHandler)&ExplosionDestroySelf::Spawn, &Script::TypeInitializer, &ExplosionDestroySelfInternal::SetupScriptVTable, &ExplosionDestroySelfInternal::SetupScriptObjectVTable, nullptr);

void FloatingMine::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(FloatingMine);
    SERIALIZE(_existsOnStart);
    SERIALIZE(_col);
}

void FloatingMine::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_existsOnStart);
    DESERIALIZE(_col);
}

class FloatingMineInternal
{
public:
    DLLEXPORT static bool Get_existsOnStart(FloatingMine* __obj)
    {
        MSVC_FUNC_EXPORT("Game.FloatingMine::Internal_Get_existsOnStart")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_existsOnStart;
    }

    DLLEXPORT static void Set_existsOnStart(FloatingMine* __obj, bool value)
    {
        MSVC_FUNC_EXPORT("Game.FloatingMine::Internal_Set_existsOnStart")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_existsOnStart = value;
    }

    DLLEXPORT static MObject* Get_col(FloatingMine* __obj)
    {
        MSVC_FUNC_EXPORT("Game.FloatingMine::Internal_Get_col")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_col.GetManagedInstance();
    }

    DLLEXPORT static void Set_col(FloatingMine* __obj, Collider* value)
    {
        MSVC_FUNC_EXPORT("Game.FloatingMine::Internal_Set_col")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_col = value;
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

ScriptingTypeInitializer FloatingMine::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.FloatingMine", 17), sizeof(FloatingMine), &FloatingMineInternal::InitRuntime, (ScriptingType::SpawnHandler)&FloatingMine::Spawn, &Script::TypeInitializer, &FloatingMineInternal::SetupScriptVTable, &FloatingMineInternal::SetupScriptObjectVTable, nullptr);

void GameManager::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(GameManager);
    SERIALIZE(_startingTime);
    SERIALIZE(_UIManager);
}

void GameManager::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_startingTime);
    DESERIALIZE(_UIManager);
}

class GameManagerInternal
{
public:
    DLLEXPORT static float Get_startingTime(GameManager* __obj)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Get_startingTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_startingTime;
    }

    DLLEXPORT static void Set_startingTime(GameManager* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Set_startingTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_startingTime = value;
    }

    DLLEXPORT static MObject* Get_UIManager(GameManager* __obj)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Get_UIManager")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_UIManager.GetManagedInstance();
    }

    DLLEXPORT static void Set_UIManager(GameManager* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.GameManager::Internal_Set_UIManager")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_UIManager = value;
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

void Key::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Key);
    SERIALIZE(_door);
}

void Key::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_door);
}

class KeyInternal
{
public:
    DLLEXPORT static MObject* Get_door(Key* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Key::Internal_Get_door")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_door.GetManagedInstance();
    }

    DLLEXPORT static void Set_door(Key* __obj, Door* value)
    {
        MSVC_FUNC_EXPORT("Game.Key::Internal_Set_door")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_door = value;
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

ScriptingTypeInitializer Key::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Key", 8), sizeof(Key), &KeyInternal::InitRuntime, (ScriptingType::SpawnHandler)&Key::Spawn, &Script::TypeInitializer, &KeyInternal::SetupScriptVTable, &KeyInternal::SetupScriptObjectVTable, nullptr);

void LauncherEnemy::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(LauncherEnemy);
    SERIALIZE(_missilePrefab);
    SERIALIZE(_spawnTime);
    SERIALIZE(_startingTime);
}

void LauncherEnemy::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_missilePrefab);
    DESERIALIZE(_spawnTime);
    DESERIALIZE(_startingTime);
}

class LauncherEnemyInternal
{
public:
    DLLEXPORT static MObject* Get_missilePrefab(LauncherEnemy* __obj)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Get_missilePrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_missilePrefab.GetManagedInstance();
    }

    DLLEXPORT static void Set_missilePrefab(LauncherEnemy* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Set_missilePrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_missilePrefab = value;
    }

    DLLEXPORT static float Get_spawnTime(LauncherEnemy* __obj)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Get_spawnTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_spawnTime;
    }

    DLLEXPORT static void Set_spawnTime(LauncherEnemy* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Set_spawnTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_spawnTime = value;
    }

    DLLEXPORT static float Get_startingTime(LauncherEnemy* __obj)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Get_startingTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_startingTime;
    }

    DLLEXPORT static void Set_startingTime(LauncherEnemy* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.LauncherEnemy::Internal_Set_startingTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_startingTime = value;
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

ScriptingTypeInitializer LauncherEnemy::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.LauncherEnemy", 18), sizeof(LauncherEnemy), &LauncherEnemyInternal::InitRuntime, (ScriptingType::SpawnHandler)&LauncherEnemy::Spawn, &Script::TypeInitializer, &LauncherEnemyInternal::SetupScriptVTable, &LauncherEnemyInternal::SetupScriptObjectVTable, nullptr);

void MineSpawner::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(MineSpawner);
    SERIALIZE(_minePrefab);
    SERIALIZE(_mineTarget);
    SERIALIZE(_moveSpeed);
    SERIALIZE(_spawnTime);
    SERIALIZE(_spawnEarly);
}

void MineSpawner::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_minePrefab);
    DESERIALIZE(_mineTarget);
    DESERIALIZE(_moveSpeed);
    DESERIALIZE(_spawnTime);
    DESERIALIZE(_spawnEarly);
}

class MineSpawnerInternal
{
public:
    DLLEXPORT static MObject* Get_minePrefab(MineSpawner* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Get_minePrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_minePrefab.GetManagedInstance();
    }

    DLLEXPORT static void Set_minePrefab(MineSpawner* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Set_minePrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_minePrefab = value;
    }

    DLLEXPORT static MObject* Get_mineTarget(MineSpawner* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Get_mineTarget")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_mineTarget.GetManagedInstance();
    }

    DLLEXPORT static void Set_mineTarget(MineSpawner* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Set_mineTarget")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_mineTarget = value;
    }

    DLLEXPORT static float Get_moveSpeed(MineSpawner* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Get_moveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_moveSpeed;
    }

    DLLEXPORT static void Set_moveSpeed(MineSpawner* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Set_moveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_moveSpeed = value;
    }

    DLLEXPORT static float Get_spawnTime(MineSpawner* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Get_spawnTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_spawnTime;
    }

    DLLEXPORT static void Set_spawnTime(MineSpawner* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Set_spawnTime")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_spawnTime = value;
    }

    DLLEXPORT static float Get_spawnEarly(MineSpawner* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Get_spawnEarly")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_spawnEarly;
    }

    DLLEXPORT static void Set_spawnEarly(MineSpawner* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.MineSpawner::Internal_Set_spawnEarly")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_spawnEarly = value;
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

ScriptingTypeInitializer MineSpawner::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.MineSpawner", 16), sizeof(MineSpawner), &MineSpawnerInternal::InitRuntime, (ScriptingType::SpawnHandler)&MineSpawner::Spawn, &Script::TypeInitializer, &MineSpawnerInternal::SetupScriptVTable, &MineSpawnerInternal::SetupScriptObjectVTable, nullptr);

void MovingEnemy::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(MovingEnemy);
    SERIALIZE(_followPoints);
    SERIALIZE(_moveSpeed);
}

void MovingEnemy::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_followPoints);
    DESERIALIZE(_moveSpeed);
}

class MovingEnemyInternal
{
public:
    DLLEXPORT static MArray* Get_followPoints(MovingEnemy* __obj, MTypeObject* resultArrayItemType0, int* __returnCount)
    {
        MSVC_FUNC_EXPORT("Game.MovingEnemy::Internal_Get_followPoints")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        const auto& __callTemp = __obj->_followPoints;
        *__returnCount = __callTemp.Count();
        return MUtils::ToArray(__callTemp, MUtils::GetClass(resultArrayItemType0));
    }

    DLLEXPORT static void Set_followPoints(MovingEnemy* __obj, MArray* value, int __valueCount)
    {
        MSVC_FUNC_EXPORT("Game.MovingEnemy::Internal_Set_followPoints")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_followPoints = MUtils::ToArray<ScriptingObjectReference<Actor>>(value);
    }

    DLLEXPORT static float Get_moveSpeed(MovingEnemy* __obj)
    {
        MSVC_FUNC_EXPORT("Game.MovingEnemy::Internal_Get_moveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_moveSpeed;
    }

    DLLEXPORT static void Set_moveSpeed(MovingEnemy* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.MovingEnemy::Internal_Set_moveSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_moveSpeed = value;
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

ScriptingTypeInitializer MovingEnemy::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.MovingEnemy", 16), sizeof(MovingEnemy), &MovingEnemyInternal::InitRuntime, (ScriptingType::SpawnHandler)&MovingEnemy::Spawn, &Script::TypeInitializer, &MovingEnemyInternal::SetupScriptVTable, &MovingEnemyInternal::SetupScriptObjectVTable, nullptr);

void Pickup::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Pickup);
    SERIALIZE(_audioSource);
    SERIALIZE(_type);
}

void Pickup::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_audioSource);
    DESERIALIZE(_type);
}

class PickupInternal
{
public:
    DLLEXPORT static MObject* Get_audioSource(Pickup* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Pickup::Internal_Get_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_audioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_audioSource(Pickup* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.Pickup::Internal_Set_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_audioSource = value;
    }

    DLLEXPORT static int Get_type(Pickup* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Pickup::Internal_Get_type")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_type;
    }

    DLLEXPORT static void Set_type(Pickup* __obj, int value)
    {
        MSVC_FUNC_EXPORT("Game.Pickup::Internal_Set_type")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_type = value;
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

ScriptingTypeInitializer Pickup::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Pickup", 11), sizeof(Pickup), &PickupInternal::InitRuntime, (ScriptingType::SpawnHandler)&Pickup::Spawn, &Script::TypeInitializer, &PickupInternal::SetupScriptVTable, &PickupInternal::SetupScriptObjectVTable, nullptr);

void PlayerController::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(PlayerController);
    SERIALIZE(_characterController);
    SERIALIZE(_cameraContainer);
    SERIALIZE(_playerBody);
    SERIALIZE(_splatSource);
    SERIALIZE(_jumpSource);
    SERIALIZE(_loseSource);
    SERIALIZE(_movementSpeed);
    SERIALIZE(_airMovementAcceleration);
    SERIALIZE(_groundMovementAcceleration);
    SERIALIZE(_gravity);
    SERIALIZE(_rotationSmoothing);
    SERIALIZE(_jumpSpeed);
    SERIALIZE(_jumpNormalForce);
    SERIALIZE(_jumpVerticalForce);
}

void PlayerController::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_characterController);
    DESERIALIZE(_cameraContainer);
    DESERIALIZE(_playerBody);
    DESERIALIZE(_splatSource);
    DESERIALIZE(_jumpSource);
    DESERIALIZE(_loseSource);
    DESERIALIZE(_movementSpeed);
    DESERIALIZE(_airMovementAcceleration);
    DESERIALIZE(_groundMovementAcceleration);
    DESERIALIZE(_gravity);
    DESERIALIZE(_rotationSmoothing);
    DESERIALIZE(_jumpSpeed);
    DESERIALIZE(_jumpNormalForce);
    DESERIALIZE(_jumpVerticalForce);
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

    DLLEXPORT static MObject* Get_splatSource(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_splatSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_splatSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_splatSource(PlayerController* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_splatSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_splatSource = value;
    }

    DLLEXPORT static MObject* Get_jumpSource(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_jumpSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_jumpSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_jumpSource(PlayerController* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_jumpSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_jumpSource = value;
    }

    DLLEXPORT static MObject* Get_loseSource(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_loseSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_loseSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_loseSource(PlayerController* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_loseSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_loseSource = value;
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

    DLLEXPORT static float Get_jumpNormalForce(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_jumpNormalForce")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_jumpNormalForce;
    }

    DLLEXPORT static void Set_jumpNormalForce(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_jumpNormalForce")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_jumpNormalForce = value;
    }

    DLLEXPORT static float Get_jumpVerticalForce(PlayerController* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Get_jumpVerticalForce")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_jumpVerticalForce;
    }

    DLLEXPORT static void Set_jumpVerticalForce(PlayerController* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerController::Internal_Set_jumpVerticalForce")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_jumpVerticalForce = value;
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
    SERIALIZE(_pc);
    SERIALIZE(_shotgun);
    SERIALIZE(_shotgunAudioSource);
    SERIALIZE(_pistol);
    SERIALIZE(_pistolAudioSource);
    SERIALIZE(_bulletTrailPrefab);
    SERIALIZE(_layers);
    SERIALIZE(_pistolAmmo);
    SERIALIZE(_shotgunAmmo);
    SERIALIZE(_pistolVisualRecoilDistance);
    SERIALIZE(_pistolVisualRecoilRotation);
    SERIALIZE(_shotgunVisualRecoilDistance);
    SERIALIZE(_shotgunVisualRecoilRotation);
}

void PlayerWeapon::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_pc);
    DESERIALIZE(_shotgun);
    DESERIALIZE(_shotgunAudioSource);
    DESERIALIZE(_pistol);
    DESERIALIZE(_pistolAudioSource);
    DESERIALIZE(_bulletTrailPrefab);
    DESERIALIZE(_layers);
    DESERIALIZE(_pistolAmmo);
    DESERIALIZE(_shotgunAmmo);
    DESERIALIZE(_pistolVisualRecoilDistance);
    DESERIALIZE(_pistolVisualRecoilRotation);
    DESERIALIZE(_shotgunVisualRecoilDistance);
    DESERIALIZE(_shotgunVisualRecoilRotation);
}

class PlayerWeaponInternal
{
public:
    DLLEXPORT static MObject* Get_pc(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pc")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pc.GetManagedInstance();
    }

    DLLEXPORT static void Set_pc(PlayerWeapon* __obj, PlayerController* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pc")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pc = value;
    }

    DLLEXPORT static MObject* Get_shotgun(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_shotgun")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_shotgun.GetManagedInstance();
    }

    DLLEXPORT static void Set_shotgun(PlayerWeapon* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_shotgun")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_shotgun = value;
    }

    DLLEXPORT static MObject* Get_shotgunAudioSource(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_shotgunAudioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_shotgunAudioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_shotgunAudioSource(PlayerWeapon* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_shotgunAudioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_shotgunAudioSource = value;
    }

    DLLEXPORT static MObject* Get_pistol(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pistol")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pistol.GetManagedInstance();
    }

    DLLEXPORT static void Set_pistol(PlayerWeapon* __obj, Actor* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pistol")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pistol = value;
    }

    DLLEXPORT static MObject* Get_pistolAudioSource(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pistolAudioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pistolAudioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_pistolAudioSource(PlayerWeapon* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pistolAudioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pistolAudioSource = value;
    }

    DLLEXPORT static MObject* Get_bulletTrailPrefab(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_bulletTrailPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_bulletTrailPrefab.GetManagedInstance();
    }

    DLLEXPORT static void Set_bulletTrailPrefab(PlayerWeapon* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_bulletTrailPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_bulletTrailPrefab = value;
    }

    DLLEXPORT static void Get_layers(PlayerWeapon* __obj, LayersMask* __resultAsRef)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_layers")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        *__resultAsRef = __obj->_layers;
    }

    DLLEXPORT static void Set_layers(PlayerWeapon* __obj, LayersMask* value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_layers")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_layers = *value;
    }

    DLLEXPORT static int Get_pistolAmmo(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pistolAmmo")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pistolAmmo;
    }

    DLLEXPORT static void Set_pistolAmmo(PlayerWeapon* __obj, int value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pistolAmmo")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pistolAmmo = value;
    }

    DLLEXPORT static int Get_shotgunAmmo(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_shotgunAmmo")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_shotgunAmmo;
    }

    DLLEXPORT static void Set_shotgunAmmo(PlayerWeapon* __obj, int value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_shotgunAmmo")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_shotgunAmmo = value;
    }

    DLLEXPORT static float Get_pistolVisualRecoilDistance(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pistolVisualRecoilDistance")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pistolVisualRecoilDistance;
    }

    DLLEXPORT static void Set_pistolVisualRecoilDistance(PlayerWeapon* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pistolVisualRecoilDistance")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pistolVisualRecoilDistance = value;
    }

    DLLEXPORT static float Get_pistolVisualRecoilRotation(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_pistolVisualRecoilRotation")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_pistolVisualRecoilRotation;
    }

    DLLEXPORT static void Set_pistolVisualRecoilRotation(PlayerWeapon* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_pistolVisualRecoilRotation")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_pistolVisualRecoilRotation = value;
    }

    DLLEXPORT static float Get_shotgunVisualRecoilDistance(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_shotgunVisualRecoilDistance")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_shotgunVisualRecoilDistance;
    }

    DLLEXPORT static void Set_shotgunVisualRecoilDistance(PlayerWeapon* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_shotgunVisualRecoilDistance")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_shotgunVisualRecoilDistance = value;
    }

    DLLEXPORT static float Get_shotgunVisualRecoilRotation(PlayerWeapon* __obj)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Get_shotgunVisualRecoilRotation")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_shotgunVisualRecoilRotation;
    }

    DLLEXPORT static void Set_shotgunVisualRecoilRotation(PlayerWeapon* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.PlayerWeapon::Internal_Set_shotgunVisualRecoilRotation")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_shotgunVisualRecoilRotation = value;
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

void Projectile::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Projectile);
    SERIALIZE(_collider);
}

void Projectile::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_collider);
}

class ProjectileInternal
{
public:
    DLLEXPORT static MObject* Get_collider(Projectile* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Projectile::Internal_Get_collider")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_collider.GetManagedInstance();
    }

    DLLEXPORT static void Set_collider(Projectile* __obj, Collider* value)
    {
        MSVC_FUNC_EXPORT("Game.Projectile::Internal_Set_collider")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_collider = value;
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

ScriptingTypeInitializer Projectile::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Projectile", 15), sizeof(Projectile), &ProjectileInternal::InitRuntime, (ScriptingType::SpawnHandler)&Projectile::Spawn, &Script::TypeInitializer, &ProjectileInternal::SetupScriptVTable, &ProjectileInternal::SetupScriptObjectVTable, nullptr);

void Rocket::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(Rocket);
    SERIALIZE(_rb);
    SERIALIZE(_col);
    SERIALIZE(_audioSource);
    SERIALIZE(_thrustPower);
}

void Rocket::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_rb);
    DESERIALIZE(_col);
    DESERIALIZE(_audioSource);
    DESERIALIZE(_thrustPower);
}

class RocketInternal
{
public:
    DLLEXPORT static MObject* Get_rb(Rocket* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Get_rb")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_rb.GetManagedInstance();
    }

    DLLEXPORT static void Set_rb(Rocket* __obj, RigidBody* value)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Set_rb")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_rb = value;
    }

    DLLEXPORT static MObject* Get_col(Rocket* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Get_col")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_col.GetManagedInstance();
    }

    DLLEXPORT static void Set_col(Rocket* __obj, Collider* value)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Set_col")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_col = value;
    }

    DLLEXPORT static MObject* Get_audioSource(Rocket* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Get_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_audioSource.GetManagedInstance();
    }

    DLLEXPORT static void Set_audioSource(Rocket* __obj, AudioSource* value)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Set_audioSource")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_audioSource = value;
    }

    DLLEXPORT static float Get_thrustPower(Rocket* __obj)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Get_thrustPower")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_thrustPower;
    }

    DLLEXPORT static void Set_thrustPower(Rocket* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.Rocket::Internal_Set_thrustPower")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_thrustPower = value;
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

ScriptingTypeInitializer Rocket::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.Rocket", 11), sizeof(Rocket), &RocketInternal::InitRuntime, (ScriptingType::SpawnHandler)&Rocket::Spawn, &Script::TypeInitializer, &RocketInternal::SetupScriptVTable, &RocketInternal::SetupScriptObjectVTable, nullptr);

void RotateObject::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(RotateObject);
    SERIALIZE(_rotationSpeed);
    SERIALIZE(_rotationAxis);
}

void RotateObject::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_rotationSpeed);
    DESERIALIZE(_rotationAxis);
}

class RotateObjectInternal
{
public:
    DLLEXPORT static float Get_rotationSpeed(RotateObject* __obj)
    {
        MSVC_FUNC_EXPORT("Game.RotateObject::Internal_Get_rotationSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_rotationSpeed;
    }

    DLLEXPORT static void Set_rotationSpeed(RotateObject* __obj, float value)
    {
        MSVC_FUNC_EXPORT("Game.RotateObject::Internal_Set_rotationSpeed")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_rotationSpeed = value;
    }

    DLLEXPORT static void Get_rotationAxis(RotateObject* __obj, Vector3* __resultAsRef)
    {
        MSVC_FUNC_EXPORT("Game.RotateObject::Internal_Get_rotationAxis")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        *__resultAsRef = __obj->_rotationAxis;
    }

    DLLEXPORT static void Set_rotationAxis(RotateObject* __obj, Vector3* value)
    {
        MSVC_FUNC_EXPORT("Game.RotateObject::Internal_Set_rotationAxis")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_rotationAxis = *value;
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

ScriptingTypeInitializer RotateObject::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.RotateObject", 17), sizeof(RotateObject), &RotateObjectInternal::InitRuntime, (ScriptingType::SpawnHandler)&RotateObject::Spawn, &Script::TypeInitializer, &RotateObjectInternal::SetupScriptVTable, &RotateObjectInternal::SetupScriptObjectVTable, nullptr);

void ShotHandler::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(ShotHandler);
}

void ShotHandler::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
}

class ShotHandlerInternal
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

ScriptingTypeInitializer ShotHandler::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.ShotHandler", 16), sizeof(ShotHandler), &ShotHandlerInternal::InitRuntime, (ScriptingType::SpawnHandler)&ShotHandler::Spawn, &Script::TypeInitializer, &ShotHandlerInternal::SetupScriptVTable, &ShotHandlerInternal::SetupScriptObjectVTable, nullptr);

void TurretEnemy::Serialize(SerializeStream& stream, const void* otherObj)
{
    Script::Serialize(stream, otherObj);
    SERIALIZE_GET_OTHER_OBJ(TurretEnemy);
    SERIALIZE(_bulletPrefab);
}

void TurretEnemy::Deserialize(DeserializeStream& stream, ISerializeModifier* modifier)
{
    Script::Deserialize(stream, modifier);
    DESERIALIZE(_bulletPrefab);
}

class TurretEnemyInternal
{
public:
    DLLEXPORT static MObject* Get_bulletPrefab(TurretEnemy* __obj)
    {
        MSVC_FUNC_EXPORT("Game.TurretEnemy::Internal_Get_bulletPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        return __obj->_bulletPrefab.GetManagedInstance();
    }

    DLLEXPORT static void Set_bulletPrefab(TurretEnemy* __obj, Prefab* value)
    {
        MSVC_FUNC_EXPORT("Game.TurretEnemy::Internal_Set_bulletPrefab")
        if (__obj == nullptr) DebugLog::ThrowNullReference();
        __obj->_bulletPrefab = value;
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

ScriptingTypeInitializer TurretEnemy::TypeInitializer((BinaryModule*)GetBinaryModuleGame(), StringAnsiView("Game.TurretEnemy", 16), sizeof(TurretEnemy), &TurretEnemyInternal::InitRuntime, (ScriptingType::SpawnHandler)&TurretEnemy::Spawn, &Script::TypeInitializer, &TurretEnemyInternal::SetupScriptVTable, &TurretEnemyInternal::SetupScriptObjectVTable, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
