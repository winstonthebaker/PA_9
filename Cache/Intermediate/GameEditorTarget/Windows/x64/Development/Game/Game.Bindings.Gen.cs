#if BUILD_DEVELOPMENT && PLATFORM_WINDOWS && FLAX_1 && FLAX_1_9 && FLAX_1_1_OR_NEWER && FLAX_1_2_OR_NEWER && FLAX_1_3_OR_NEWER && FLAX_1_4_OR_NEWER && FLAX_1_5_OR_NEWER && FLAX_1_6_OR_NEWER && FLAX_1_7_OR_NEWER && FLAX_1_8_OR_NEWER && FLAX_1_9_OR_NEWER && FLAX && FLAX_ASSERTIONS && FLAX_EDITOR && USE_NETCORE && NET && NET8_0 && NET8_0_OR_GREATER && NETCOREAPP && NETCOREAPP3_1_OR_GREATER && NETCOREAPP3_0_OR_GREATER && NETCOREAPP2_2_OR_GREATER && NETCOREAPP2_1_OR_GREATER && NETCOREAPP2_0_OR_GREATER && NETCOREAPP1_1_OR_GREATER && NETCOREAPP1_0_OR_GREATER && true
// This code was auto-generated. Do not modify it.

#pragma warning disable 0612
using FlaxEngine;
using FlaxEngine.Interop;
using Game.Interop;
using System;
using System.ComponentModel;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.Marshalling;

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(GameManagerMarshaller))]
    public unsafe partial class GameManager : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GameManager"/>.
        /// </summary>
        public GameManager() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _deathScreenActor
        {
            get { return Internal_Get_deathScreenActor(__unmanagedPtr); }
            set { Internal_Set_deathScreenActor(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Get_deathScreenActor", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_deathScreenActor(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Set_deathScreenActor", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_deathScreenActor(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="GameManager"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(GameManager), MarshalMode.ManagedToUnmanagedIn, typeof(GameManagerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.UnmanagedToManagedOut, typeof(GameManagerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.ElementIn, typeof(GameManagerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.ManagedToUnmanagedOut, typeof(GameManagerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.UnmanagedToManagedIn, typeof(GameManagerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.ElementOut, typeof(GameManagerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.ManagedToUnmanagedRef, typeof(GameManagerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.UnmanagedToManagedRef, typeof(GameManagerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(GameManager), MarshalMode.ElementRef, typeof(GameManagerMarshaller))]
    public static class GameManagerMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static GameManager ConvertToManaged(IntPtr unmanaged) => Unsafe.As<GameManager>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(GameManager managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static GameManager ConvertToManaged(IntPtr unmanaged) => Unsafe.As<GameManager>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(GameManager managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(GameManager managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public GameManager ToManaged() => Unsafe.As<GameManager>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static GameManager ConvertToManaged(IntPtr unmanaged) => Unsafe.As<GameManager>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(GameManager managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static GameManager ToManaged(IntPtr managed) => Unsafe.As<GameManager>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(GameManager managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(ICanTakeDamageMarshaller))]
    public unsafe partial class ICanTakeDamage : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ICanTakeDamage"/>.
        /// </summary>
        public ICanTakeDamage() : base()
        {
        }
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="ICanTakeDamage"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ManagedToUnmanagedIn, typeof(ICanTakeDamageMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.UnmanagedToManagedOut, typeof(ICanTakeDamageMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ElementIn, typeof(ICanTakeDamageMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ManagedToUnmanagedOut, typeof(ICanTakeDamageMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.UnmanagedToManagedIn, typeof(ICanTakeDamageMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ElementOut, typeof(ICanTakeDamageMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ManagedToUnmanagedRef, typeof(ICanTakeDamageMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.UnmanagedToManagedRef, typeof(ICanTakeDamageMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ICanTakeDamage), MarshalMode.ElementRef, typeof(ICanTakeDamageMarshaller))]
    public static class ICanTakeDamageMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static ICanTakeDamage ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ICanTakeDamage>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ICanTakeDamage managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static ICanTakeDamage ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ICanTakeDamage>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ICanTakeDamage managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(ICanTakeDamage managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public ICanTakeDamage ToManaged() => Unsafe.As<ICanTakeDamage>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static ICanTakeDamage ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ICanTakeDamage>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(ICanTakeDamage managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static ICanTakeDamage ToManaged(IntPtr managed) => Unsafe.As<ICanTakeDamage>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(ICanTakeDamage managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(PlayerControllerMarshaller))]
    public unsafe partial class PlayerController : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PlayerController"/>.
        /// </summary>
        public PlayerController() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public CharacterController _characterController
        {
            get { return Internal_Get_characterController(__unmanagedPtr); }
            set { Internal_Set_characterController(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_characterController", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial CharacterController Internal_Get_characterController(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_characterController", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_characterController(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _cameraContainer
        {
            get { return Internal_Get_cameraContainer(__unmanagedPtr); }
            set { Internal_Set_cameraContainer(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_cameraContainer", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_cameraContainer(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_cameraContainer", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_cameraContainer(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _playerBody
        {
            get { return Internal_Get_playerBody(__unmanagedPtr); }
            set { Internal_Set_playerBody(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_playerBody", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_playerBody(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_playerBody", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_playerBody(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue((float)600.0)]
        public float _movementSpeed
        {
            get { return Internal_Get_movementSpeed(__unmanagedPtr); }
            set { Internal_Set_movementSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_movementSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_movementSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_movementSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_movementSpeed(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _airMovementAcceleration
        {
            get { return Internal_Get_airMovementAcceleration(__unmanagedPtr); }
            set { Internal_Set_airMovementAcceleration(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_airMovementAcceleration", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_airMovementAcceleration(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_airMovementAcceleration", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_airMovementAcceleration(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)2000.0)]
        public float _groundMovementAcceleration
        {
            get { return Internal_Get_groundMovementAcceleration(__unmanagedPtr); }
            set { Internal_Set_groundMovementAcceleration(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_groundMovementAcceleration", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_groundMovementAcceleration(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_groundMovementAcceleration", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_groundMovementAcceleration(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _gravity
        {
            get { return Internal_Get_gravity(__unmanagedPtr); }
            set { Internal_Set_gravity(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_gravity", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_gravity(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_gravity", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_gravity(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)20.0)]
        public float _rotationSmoothing
        {
            get { return Internal_Get_rotationSmoothing(__unmanagedPtr); }
            set { Internal_Set_rotationSmoothing(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_rotationSmoothing", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_rotationSmoothing(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_rotationSmoothing", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_rotationSmoothing(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _jumpSpeed
        {
            get { return Internal_Get_jumpSpeed(__unmanagedPtr); }
            set { Internal_Set_jumpSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_jumpSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_jumpSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_jumpSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_jumpSpeed(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="PlayerController"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ManagedToUnmanagedIn, typeof(PlayerControllerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.UnmanagedToManagedOut, typeof(PlayerControllerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ElementIn, typeof(PlayerControllerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ManagedToUnmanagedOut, typeof(PlayerControllerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.UnmanagedToManagedIn, typeof(PlayerControllerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ElementOut, typeof(PlayerControllerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ManagedToUnmanagedRef, typeof(PlayerControllerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.UnmanagedToManagedRef, typeof(PlayerControllerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(PlayerController), MarshalMode.ElementRef, typeof(PlayerControllerMarshaller))]
    public static class PlayerControllerMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static PlayerController ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerController>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(PlayerController managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static PlayerController ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerController>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(PlayerController managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(PlayerController managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public PlayerController ToManaged() => Unsafe.As<PlayerController>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static PlayerController ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerController>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(PlayerController managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static PlayerController ToManaged(IntPtr managed) => Unsafe.As<PlayerController>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(PlayerController managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(PlayerWeaponMarshaller))]
    public unsafe partial class PlayerWeapon : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PlayerWeapon"/>.
        /// </summary>
        public PlayerWeapon() : base()
        {
        }

        [Unmanaged]
        public float _cooldown
        {
            get { return Internal_Get_cooldown(__unmanagedPtr); }
            set { Internal_Set_cooldown(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_cooldown", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_cooldown(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_cooldown", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_cooldown(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="PlayerWeapon"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ManagedToUnmanagedIn, typeof(PlayerWeaponMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.UnmanagedToManagedOut, typeof(PlayerWeaponMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ElementIn, typeof(PlayerWeaponMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ManagedToUnmanagedOut, typeof(PlayerWeaponMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.UnmanagedToManagedIn, typeof(PlayerWeaponMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ElementOut, typeof(PlayerWeaponMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ManagedToUnmanagedRef, typeof(PlayerWeaponMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.UnmanagedToManagedRef, typeof(PlayerWeaponMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(PlayerWeapon), MarshalMode.ElementRef, typeof(PlayerWeaponMarshaller))]
    public static class PlayerWeaponMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static PlayerWeapon ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerWeapon>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(PlayerWeapon managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static PlayerWeapon ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerWeapon>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(PlayerWeapon managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(PlayerWeapon managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public PlayerWeapon ToManaged() => Unsafe.As<PlayerWeapon>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static PlayerWeapon ConvertToManaged(IntPtr unmanaged) => Unsafe.As<PlayerWeapon>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(PlayerWeapon managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static PlayerWeapon ToManaged(IntPtr managed) => Unsafe.As<PlayerWeapon>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(PlayerWeapon managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(TestScriptMarshaller))]
    public unsafe partial class TestScript : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TestScript"/>.
        /// </summary>
        public TestScript() : base()
        {
        }

        [Unmanaged]
        [DefaultValue((float)600.0f)]
        public float MoveSpeed
        {
            get { return Internal_GetMoveSpeed(__unmanagedPtr); }
            set { Internal_SetMoveSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_GetMoveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_GetMoveSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_SetMoveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_SetMoveSpeed(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)980.0f)]
        public float Gravity
        {
            get { return Internal_GetGravity(__unmanagedPtr); }
            set { Internal_SetGravity(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_GetGravity", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_GetGravity(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_SetGravity", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_SetGravity(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)10.0f)]
        public float RotationSpeed
        {
            get { return Internal_GetRotationSpeed(__unmanagedPtr); }
            set { Internal_SetRotationSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_GetRotationSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_GetRotationSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_SetRotationSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_SetRotationSpeed(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue(null)]
        public CharacterController Controller
        {
            get { return Internal_GetController(__unmanagedPtr); }
            set { Internal_SetController(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_GetController", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial CharacterController Internal_GetController(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_SetController", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_SetController(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Camera PlayerCamera
        {
            get { return Internal_GetPlayerCamera(__unmanagedPtr); }
            set { Internal_SetPlayerCamera(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_GetPlayerCamera", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Camera Internal_GetPlayerCamera(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TestScript::Internal_SetPlayerCamera", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_SetPlayerCamera(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="TestScript"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(TestScript), MarshalMode.ManagedToUnmanagedIn, typeof(TestScriptMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.UnmanagedToManagedOut, typeof(TestScriptMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.ElementIn, typeof(TestScriptMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.ManagedToUnmanagedOut, typeof(TestScriptMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.UnmanagedToManagedIn, typeof(TestScriptMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.ElementOut, typeof(TestScriptMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.ManagedToUnmanagedRef, typeof(TestScriptMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.UnmanagedToManagedRef, typeof(TestScriptMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(TestScript), MarshalMode.ElementRef, typeof(TestScriptMarshaller))]
    public static class TestScriptMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static TestScript ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TestScript>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(TestScript managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static TestScript ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TestScript>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(TestScript managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(TestScript managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public TestScript ToManaged() => Unsafe.As<TestScript>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static TestScript ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TestScript>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(TestScript managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static TestScript ToManaged(IntPtr managed) => Unsafe.As<TestScript>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(TestScript managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

#endif
