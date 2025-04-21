#if BUILD_DEVELOPMENT && PLATFORM_WINDOWS && FLAX_1 && FLAX_1_9 && FLAX_1_1_OR_NEWER && FLAX_1_2_OR_NEWER && FLAX_1_3_OR_NEWER && FLAX_1_4_OR_NEWER && FLAX_1_5_OR_NEWER && FLAX_1_6_OR_NEWER && FLAX_1_7_OR_NEWER && FLAX_1_8_OR_NEWER && FLAX_1_9_OR_NEWER && FLAX && FLAX_ASSERTIONS && FLAX_EDITOR && USE_NETCORE && NET && NET8_0 && NET8_0_OR_GREATER && NETCOREAPP && NETCOREAPP3_1_OR_GREATER && NETCOREAPP3_0_OR_GREATER && NETCOREAPP2_2_OR_GREATER && NETCOREAPP2_1_OR_GREATER && NETCOREAPP2_0_OR_GREATER && NETCOREAPP1_1_OR_GREATER && NETCOREAPP1_0_OR_GREATER && true
// This code was auto-generated. Do not modify it.

#pragma warning disable 0612
using FlaxEngine;
using FlaxEngine.Interop;
using Game;
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
    [NativeMarshalling(typeof(ExplodesMarshaller))]
    public unsafe partial class Explodes : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Explodes"/>.
        /// </summary>
        public Explodes() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Prefab _explosionPrefab
        {
            get { return Internal_Get_explosionPrefab(__unmanagedPtr); }
            set { Internal_Set_explosionPrefab(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Explodes::Internal_Get_explosionPrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Prefab Internal_Get_explosionPrefab(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Explodes::Internal_Set_explosionPrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_explosionPrefab(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="Explodes"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(Explodes), MarshalMode.ManagedToUnmanagedIn, typeof(ExplodesMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.UnmanagedToManagedOut, typeof(ExplodesMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.ElementIn, typeof(ExplodesMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.ManagedToUnmanagedOut, typeof(ExplodesMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.UnmanagedToManagedIn, typeof(ExplodesMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.ElementOut, typeof(ExplodesMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.ManagedToUnmanagedRef, typeof(ExplodesMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.UnmanagedToManagedRef, typeof(ExplodesMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Explodes), MarshalMode.ElementRef, typeof(ExplodesMarshaller))]
    public static class ExplodesMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static Explodes ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Explodes>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Explodes managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static Explodes ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Explodes>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Explodes managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(Explodes managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public Explodes ToManaged() => Unsafe.As<Explodes>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static Explodes ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Explodes>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(Explodes managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static Explodes ToManaged(IntPtr managed) => Unsafe.As<Explodes>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(Explodes managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(ExplosionDestroySelfMarshaller))]
    public unsafe partial class ExplosionDestroySelf : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ExplosionDestroySelf"/>.
        /// </summary>
        public ExplosionDestroySelf() : base()
        {
        }

        [Unmanaged]
        [DefaultValue((float)5)]
        public float _lifeTime
        {
            get { return Internal_Get_lifeTime(__unmanagedPtr); }
            set { Internal_Set_lifeTime(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.ExplosionDestroySelf::Internal_Get_lifeTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_lifeTime(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.ExplosionDestroySelf::Internal_Set_lifeTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_lifeTime(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="ExplosionDestroySelf"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ManagedToUnmanagedIn, typeof(ExplosionDestroySelfMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.UnmanagedToManagedOut, typeof(ExplosionDestroySelfMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ElementIn, typeof(ExplosionDestroySelfMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ManagedToUnmanagedOut, typeof(ExplosionDestroySelfMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.UnmanagedToManagedIn, typeof(ExplosionDestroySelfMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ElementOut, typeof(ExplosionDestroySelfMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ManagedToUnmanagedRef, typeof(ExplosionDestroySelfMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.UnmanagedToManagedRef, typeof(ExplosionDestroySelfMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ExplosionDestroySelf), MarshalMode.ElementRef, typeof(ExplosionDestroySelfMarshaller))]
    public static class ExplosionDestroySelfMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static ExplosionDestroySelf ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ExplosionDestroySelf>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ExplosionDestroySelf managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static ExplosionDestroySelf ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ExplosionDestroySelf>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ExplosionDestroySelf managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(ExplosionDestroySelf managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public ExplosionDestroySelf ToManaged() => Unsafe.As<ExplosionDestroySelf>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static ExplosionDestroySelf ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ExplosionDestroySelf>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(ExplosionDestroySelf managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static ExplosionDestroySelf ToManaged(IntPtr managed) => Unsafe.As<ExplosionDestroySelf>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(ExplosionDestroySelf managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(FloatingMineMarshaller))]
    public unsafe partial class FloatingMine : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="FloatingMine"/>.
        /// </summary>
        public FloatingMine() : base()
        {
        }

        [Unmanaged]
        public bool _existsOnStart
        {
            get { return Internal_Get_existsOnStart(__unmanagedPtr); }
            set { Internal_Set_existsOnStart(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.FloatingMine::Internal_Get_existsOnStart", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        [return: MarshalAs(UnmanagedType.U1)]
        internal static partial bool Internal_Get_existsOnStart(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.FloatingMine::Internal_Set_existsOnStart", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_existsOnStart(IntPtr __obj, [MarshalAs(UnmanagedType.U1)] bool value);

        [Unmanaged]
        [DefaultValue(null)]
        public Collider _col
        {
            get { return Internal_Get_col(__unmanagedPtr); }
            set { Internal_Set_col(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.FloatingMine::Internal_Get_col", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Collider Internal_Get_col(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.FloatingMine::Internal_Set_col", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_col(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="FloatingMine"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ManagedToUnmanagedIn, typeof(FloatingMineMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.UnmanagedToManagedOut, typeof(FloatingMineMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ElementIn, typeof(FloatingMineMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ManagedToUnmanagedOut, typeof(FloatingMineMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.UnmanagedToManagedIn, typeof(FloatingMineMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ElementOut, typeof(FloatingMineMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ManagedToUnmanagedRef, typeof(FloatingMineMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.UnmanagedToManagedRef, typeof(FloatingMineMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(FloatingMine), MarshalMode.ElementRef, typeof(FloatingMineMarshaller))]
    public static class FloatingMineMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static FloatingMine ConvertToManaged(IntPtr unmanaged) => Unsafe.As<FloatingMine>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(FloatingMine managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static FloatingMine ConvertToManaged(IntPtr unmanaged) => Unsafe.As<FloatingMine>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(FloatingMine managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(FloatingMine managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public FloatingMine ToManaged() => Unsafe.As<FloatingMine>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static FloatingMine ConvertToManaged(IntPtr unmanaged) => Unsafe.As<FloatingMine>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(FloatingMine managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static FloatingMine ToManaged(IntPtr managed) => Unsafe.As<FloatingMine>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(FloatingMine managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

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
        public float _startingTime
        {
            get { return Internal_Get_startingTime(__unmanagedPtr); }
            set { Internal_Set_startingTime(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Get_startingTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_startingTime(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Set_startingTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_startingTime(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _UIManager
        {
            get { return Internal_Get_UIManager(__unmanagedPtr); }
            set { Internal_Set_UIManager(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Get_UIManager", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_UIManager(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.GameManager::Internal_Set_UIManager", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_UIManager(IntPtr __obj, IntPtr value);
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
    [NativeMarshalling(typeof(LauncherEnemyMarshaller))]
    public unsafe partial class LauncherEnemy : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="LauncherEnemy"/>.
        /// </summary>
        public LauncherEnemy() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Prefab _missilePrefab
        {
            get { return Internal_Get_missilePrefab(__unmanagedPtr); }
            set { Internal_Set_missilePrefab(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.LauncherEnemy::Internal_Get_missilePrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Prefab Internal_Get_missilePrefab(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.LauncherEnemy::Internal_Set_missilePrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_missilePrefab(IntPtr __obj, IntPtr value);

        [Unmanaged]
        public float _spawnTime
        {
            get { return Internal_Get_spawnTime(__unmanagedPtr); }
            set { Internal_Set_spawnTime(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.LauncherEnemy::Internal_Get_spawnTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_spawnTime(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.LauncherEnemy::Internal_Set_spawnTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_spawnTime(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="LauncherEnemy"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ManagedToUnmanagedIn, typeof(LauncherEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.UnmanagedToManagedOut, typeof(LauncherEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ElementIn, typeof(LauncherEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ManagedToUnmanagedOut, typeof(LauncherEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.UnmanagedToManagedIn, typeof(LauncherEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ElementOut, typeof(LauncherEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ManagedToUnmanagedRef, typeof(LauncherEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.UnmanagedToManagedRef, typeof(LauncherEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(LauncherEnemy), MarshalMode.ElementRef, typeof(LauncherEnemyMarshaller))]
    public static class LauncherEnemyMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static LauncherEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<LauncherEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(LauncherEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static LauncherEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<LauncherEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(LauncherEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(LauncherEnemy managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public LauncherEnemy ToManaged() => Unsafe.As<LauncherEnemy>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static LauncherEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<LauncherEnemy>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(LauncherEnemy managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static LauncherEnemy ToManaged(IntPtr managed) => Unsafe.As<LauncherEnemy>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(LauncherEnemy managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(MineSpawnerMarshaller))]
    public unsafe partial class MineSpawner : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MineSpawner"/>.
        /// </summary>
        public MineSpawner() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Prefab _minePrefab
        {
            get { return Internal_Get_minePrefab(__unmanagedPtr); }
            set { Internal_Set_minePrefab(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Get_minePrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Prefab Internal_Get_minePrefab(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Set_minePrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_minePrefab(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _mineTarget
        {
            get { return Internal_Get_mineTarget(__unmanagedPtr); }
            set { Internal_Set_mineTarget(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Get_mineTarget", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_mineTarget(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Set_mineTarget", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_mineTarget(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue((float)500)]
        public float _moveSpeed
        {
            get { return Internal_Get_moveSpeed(__unmanagedPtr); }
            set { Internal_Set_moveSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Get_moveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_moveSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Set_moveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_moveSpeed(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)0)]
        public float _spawnTime
        {
            get { return Internal_Get_spawnTime(__unmanagedPtr); }
            set { Internal_Set_spawnTime(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Get_spawnTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_spawnTime(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Set_spawnTime", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_spawnTime(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)0)]
        public float _spawnEarly
        {
            get { return Internal_Get_spawnEarly(__unmanagedPtr); }
            set { Internal_Set_spawnEarly(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Get_spawnEarly", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_spawnEarly(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MineSpawner::Internal_Set_spawnEarly", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_spawnEarly(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="MineSpawner"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ManagedToUnmanagedIn, typeof(MineSpawnerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.UnmanagedToManagedOut, typeof(MineSpawnerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ElementIn, typeof(MineSpawnerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ManagedToUnmanagedOut, typeof(MineSpawnerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.UnmanagedToManagedIn, typeof(MineSpawnerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ElementOut, typeof(MineSpawnerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ManagedToUnmanagedRef, typeof(MineSpawnerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.UnmanagedToManagedRef, typeof(MineSpawnerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(MineSpawner), MarshalMode.ElementRef, typeof(MineSpawnerMarshaller))]
    public static class MineSpawnerMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static MineSpawner ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MineSpawner>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(MineSpawner managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static MineSpawner ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MineSpawner>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(MineSpawner managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(MineSpawner managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public MineSpawner ToManaged() => Unsafe.As<MineSpawner>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static MineSpawner ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MineSpawner>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(MineSpawner managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static MineSpawner ToManaged(IntPtr managed) => Unsafe.As<MineSpawner>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(MineSpawner managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(MovingEnemyMarshaller))]
    public unsafe partial class MovingEnemy : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MovingEnemy"/>.
        /// </summary>
        public MovingEnemy() : base()
        {
        }

        [Unmanaged]
        public Actor[] _followPoints
        {
            get { return Internal_Get_followPoints(__unmanagedPtr, typeof(Actor), out var __returnCount); }
            set { var __valueCount = value?.Length ?? 0; Internal_Set_followPoints(__unmanagedPtr, value, __valueCount); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MovingEnemy::Internal_Get_followPoints", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        [return: MarshalUsing(typeof(FlaxEngine.Interop.ArrayMarshaller<,>), CountElementName = nameof(__returnCount))]
        internal static partial Actor[] Internal_Get_followPoints(IntPtr __obj, [MarshalUsing(typeof(FlaxEngine.Interop.SystemTypeMarshaller))] System.Type resultArrayItemType0, out int __returnCount);

        [LibraryImport("Game", EntryPoint = "Game.MovingEnemy::Internal_Set_followPoints", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_followPoints(IntPtr __obj, [MarshalUsing(typeof(FlaxEngine.Interop.ArrayMarshaller<,>), CountElementName = "__valueCount"), In] Actor[] value, int __valueCount);

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _moveSpeed
        {
            get { return Internal_Get_moveSpeed(__unmanagedPtr); }
            set { Internal_Set_moveSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.MovingEnemy::Internal_Get_moveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_moveSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.MovingEnemy::Internal_Set_moveSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_moveSpeed(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="MovingEnemy"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ManagedToUnmanagedIn, typeof(MovingEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.UnmanagedToManagedOut, typeof(MovingEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ElementIn, typeof(MovingEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ManagedToUnmanagedOut, typeof(MovingEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.UnmanagedToManagedIn, typeof(MovingEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ElementOut, typeof(MovingEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ManagedToUnmanagedRef, typeof(MovingEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.UnmanagedToManagedRef, typeof(MovingEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(MovingEnemy), MarshalMode.ElementRef, typeof(MovingEnemyMarshaller))]
    public static class MovingEnemyMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static MovingEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MovingEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(MovingEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static MovingEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MovingEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(MovingEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(MovingEnemy managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public MovingEnemy ToManaged() => Unsafe.As<MovingEnemy>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static MovingEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<MovingEnemy>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(MovingEnemy managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static MovingEnemy ToManaged(IntPtr managed) => Unsafe.As<MovingEnemy>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(MovingEnemy managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(PickupMarshaller))]
    public unsafe partial class Pickup : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Pickup"/>.
        /// </summary>
        public Pickup() : base()
        {
        }

        [Unmanaged]
        public int _type
        {
            get { return Internal_Get_type(__unmanagedPtr); }
            set { Internal_Set_type(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Pickup::Internal_Get_type", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial int Internal_Get_type(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Pickup::Internal_Set_type", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_type(IntPtr __obj, int value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="Pickup"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(Pickup), MarshalMode.ManagedToUnmanagedIn, typeof(PickupMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.UnmanagedToManagedOut, typeof(PickupMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.ElementIn, typeof(PickupMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.ManagedToUnmanagedOut, typeof(PickupMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.UnmanagedToManagedIn, typeof(PickupMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.ElementOut, typeof(PickupMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.ManagedToUnmanagedRef, typeof(PickupMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.UnmanagedToManagedRef, typeof(PickupMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Pickup), MarshalMode.ElementRef, typeof(PickupMarshaller))]
    public static class PickupMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static Pickup ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Pickup>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Pickup managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static Pickup ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Pickup>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Pickup managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(Pickup managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public Pickup ToManaged() => Unsafe.As<Pickup>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static Pickup ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Pickup>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(Pickup managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static Pickup ToManaged(IntPtr managed) => Unsafe.As<Pickup>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(Pickup managed) => ManagedHandleMarshaller.ToNative(managed);
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

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _jumpNormalForce
        {
            get { return Internal_Get_jumpNormalForce(__unmanagedPtr); }
            set { Internal_Set_jumpNormalForce(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_jumpNormalForce", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_jumpNormalForce(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_jumpNormalForce", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_jumpNormalForce(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)1000.0)]
        public float _jumpVerticalForce
        {
            get { return Internal_Get_jumpVerticalForce(__unmanagedPtr); }
            set { Internal_Set_jumpVerticalForce(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Get_jumpVerticalForce", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_jumpVerticalForce(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerController::Internal_Set_jumpVerticalForce", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_jumpVerticalForce(IntPtr __obj, float value);
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
        public float _shotgunRecoil
        {
            get { return Internal_Get_shotgunRecoil(__unmanagedPtr); }
            set { Internal_Set_shotgunRecoil(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_shotgunRecoil", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_shotgunRecoil(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_shotgunRecoil", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_shotgunRecoil(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue(null)]
        public PlayerController _pc
        {
            get { return Internal_Get_pc(__unmanagedPtr); }
            set { Internal_Set_pc(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_pc", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial PlayerController Internal_Get_pc(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_pc", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_pc(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _shotgun
        {
            get { return Internal_Get_shotgun(__unmanagedPtr); }
            set { Internal_Set_shotgun(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_shotgun", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_shotgun(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_shotgun", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_shotgun(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Actor _pistol
        {
            get { return Internal_Get_pistol(__unmanagedPtr); }
            set { Internal_Set_pistol(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_pistol", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Actor Internal_Get_pistol(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_pistol", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_pistol(IntPtr __obj, IntPtr value);

        [Unmanaged]
        public LayersMask _layers
        {
            get { Internal_Get_layers(__unmanagedPtr, out var __resultAsRef); return __resultAsRef; }
            set { Internal_Set_layers(__unmanagedPtr, ref value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_layers", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Get_layers(IntPtr __obj, out LayersMask __resultAsRef);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_layers", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_layers(IntPtr __obj, ref LayersMask value);

        [Unmanaged]
        [DefaultValue((int)0)]
        public int _pistolAmmo
        {
            get { return Internal_Get_pistolAmmo(__unmanagedPtr); }
            set { Internal_Set_pistolAmmo(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_pistolAmmo", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial int Internal_Get_pistolAmmo(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_pistolAmmo", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_pistolAmmo(IntPtr __obj, int value);

        [Unmanaged]
        [DefaultValue((int)0)]
        public int _shotgunAmmo
        {
            get { return Internal_Get_shotgunAmmo(__unmanagedPtr); }
            set { Internal_Set_shotgunAmmo(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_shotgunAmmo", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial int Internal_Get_shotgunAmmo(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_shotgunAmmo", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_shotgunAmmo(IntPtr __obj, int value);

        [Unmanaged]
        [DefaultValue((float)10)]
        public float _pistolVisualRecoilDistance
        {
            get { return Internal_Get_pistolVisualRecoilDistance(__unmanagedPtr); }
            set { Internal_Set_pistolVisualRecoilDistance(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_pistolVisualRecoilDistance", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_pistolVisualRecoilDistance(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_pistolVisualRecoilDistance", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_pistolVisualRecoilDistance(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)45)]
        public float _pistolVisualRecoilRotation
        {
            get { return Internal_Get_pistolVisualRecoilRotation(__unmanagedPtr); }
            set { Internal_Set_pistolVisualRecoilRotation(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_pistolVisualRecoilRotation", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_pistolVisualRecoilRotation(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_pistolVisualRecoilRotation", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_pistolVisualRecoilRotation(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)15)]
        public float _shotgunVisualRecoilDistance
        {
            get { return Internal_Get_shotgunVisualRecoilDistance(__unmanagedPtr); }
            set { Internal_Set_shotgunVisualRecoilDistance(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_shotgunVisualRecoilDistance", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_shotgunVisualRecoilDistance(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_shotgunVisualRecoilDistance", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_shotgunVisualRecoilDistance(IntPtr __obj, float value);

        [Unmanaged]
        [DefaultValue((float)60)]
        public float _shotgunVisualRecoilRotation
        {
            get { return Internal_Get_shotgunVisualRecoilRotation(__unmanagedPtr); }
            set { Internal_Set_shotgunVisualRecoilRotation(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Get_shotgunVisualRecoilRotation", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_shotgunVisualRecoilRotation(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.PlayerWeapon::Internal_Set_shotgunVisualRecoilRotation", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_shotgunVisualRecoilRotation(IntPtr __obj, float value);
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
    [NativeMarshalling(typeof(ProjectileMarshaller))]
    public unsafe partial class Projectile : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Projectile"/>.
        /// </summary>
        public Projectile() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Collider _collider
        {
            get { return Internal_Get_collider(__unmanagedPtr); }
            set { Internal_Set_collider(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Projectile::Internal_Get_collider", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Collider Internal_Get_collider(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Projectile::Internal_Set_collider", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_collider(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="Projectile"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(Projectile), MarshalMode.ManagedToUnmanagedIn, typeof(ProjectileMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.UnmanagedToManagedOut, typeof(ProjectileMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.ElementIn, typeof(ProjectileMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.ManagedToUnmanagedOut, typeof(ProjectileMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.UnmanagedToManagedIn, typeof(ProjectileMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.ElementOut, typeof(ProjectileMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.ManagedToUnmanagedRef, typeof(ProjectileMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.UnmanagedToManagedRef, typeof(ProjectileMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Projectile), MarshalMode.ElementRef, typeof(ProjectileMarshaller))]
    public static class ProjectileMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static Projectile ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Projectile>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Projectile managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static Projectile ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Projectile>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Projectile managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(Projectile managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public Projectile ToManaged() => Unsafe.As<Projectile>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static Projectile ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Projectile>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(Projectile managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static Projectile ToManaged(IntPtr managed) => Unsafe.As<Projectile>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(Projectile managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(RocketMarshaller))]
    public unsafe partial class Rocket : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Rocket"/>.
        /// </summary>
        public Rocket() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public RigidBody _rb
        {
            get { return Internal_Get_rb(__unmanagedPtr); }
            set { Internal_Set_rb(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Get_rb", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial RigidBody Internal_Get_rb(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Set_rb", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_rb(IntPtr __obj, IntPtr value);

        [Unmanaged]
        [DefaultValue(null)]
        public Collider _col
        {
            get { return Internal_Get_col(__unmanagedPtr); }
            set { Internal_Set_col(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Get_col", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Collider Internal_Get_col(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Set_col", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_col(IntPtr __obj, IntPtr value);

        [Unmanaged]
        public float _thrustPower
        {
            get { return Internal_Get_thrustPower(__unmanagedPtr); }
            set { Internal_Set_thrustPower(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Get_thrustPower", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_thrustPower(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.Rocket::Internal_Set_thrustPower", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_thrustPower(IntPtr __obj, float value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="Rocket"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(Rocket), MarshalMode.ManagedToUnmanagedIn, typeof(RocketMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.UnmanagedToManagedOut, typeof(RocketMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.ElementIn, typeof(RocketMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.ManagedToUnmanagedOut, typeof(RocketMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.UnmanagedToManagedIn, typeof(RocketMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.ElementOut, typeof(RocketMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.ManagedToUnmanagedRef, typeof(RocketMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.UnmanagedToManagedRef, typeof(RocketMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(Rocket), MarshalMode.ElementRef, typeof(RocketMarshaller))]
    public static class RocketMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static Rocket ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Rocket>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Rocket managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static Rocket ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Rocket>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(Rocket managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(Rocket managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public Rocket ToManaged() => Unsafe.As<Rocket>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static Rocket ConvertToManaged(IntPtr unmanaged) => Unsafe.As<Rocket>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(Rocket managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static Rocket ToManaged(IntPtr managed) => Unsafe.As<Rocket>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(Rocket managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(RotateObjectMarshaller))]
    public unsafe partial class RotateObject : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RotateObject"/>.
        /// </summary>
        public RotateObject() : base()
        {
        }

        [Unmanaged]
        public float _rotationSpeed
        {
            get { return Internal_Get_rotationSpeed(__unmanagedPtr); }
            set { Internal_Set_rotationSpeed(__unmanagedPtr, value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.RotateObject::Internal_Get_rotationSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial float Internal_Get_rotationSpeed(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.RotateObject::Internal_Set_rotationSpeed", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_rotationSpeed(IntPtr __obj, float value);

        [Unmanaged]
        public Vector3 _rotationAxis
        {
            get { Internal_Get_rotationAxis(__unmanagedPtr, out var __resultAsRef); return __resultAsRef; }
            set { Internal_Set_rotationAxis(__unmanagedPtr, ref value); }
        }

        [LibraryImport("Game", EntryPoint = "Game.RotateObject::Internal_Get_rotationAxis", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Get_rotationAxis(IntPtr __obj, out Vector3 __resultAsRef);

        [LibraryImport("Game", EntryPoint = "Game.RotateObject::Internal_Set_rotationAxis", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_rotationAxis(IntPtr __obj, ref Vector3 value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="RotateObject"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ManagedToUnmanagedIn, typeof(RotateObjectMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.UnmanagedToManagedOut, typeof(RotateObjectMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ElementIn, typeof(RotateObjectMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ManagedToUnmanagedOut, typeof(RotateObjectMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.UnmanagedToManagedIn, typeof(RotateObjectMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ElementOut, typeof(RotateObjectMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ManagedToUnmanagedRef, typeof(RotateObjectMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.UnmanagedToManagedRef, typeof(RotateObjectMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(RotateObject), MarshalMode.ElementRef, typeof(RotateObjectMarshaller))]
    public static class RotateObjectMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static RotateObject ConvertToManaged(IntPtr unmanaged) => Unsafe.As<RotateObject>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(RotateObject managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static RotateObject ConvertToManaged(IntPtr unmanaged) => Unsafe.As<RotateObject>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(RotateObject managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(RotateObject managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public RotateObject ToManaged() => Unsafe.As<RotateObject>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static RotateObject ConvertToManaged(IntPtr unmanaged) => Unsafe.As<RotateObject>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(RotateObject managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static RotateObject ToManaged(IntPtr managed) => Unsafe.As<RotateObject>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(RotateObject managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(ShotHandlerMarshaller))]
    public unsafe partial class ShotHandler : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ShotHandler"/>.
        /// </summary>
        public ShotHandler() : base()
        {
        }
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="ShotHandler"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ManagedToUnmanagedIn, typeof(ShotHandlerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.UnmanagedToManagedOut, typeof(ShotHandlerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ElementIn, typeof(ShotHandlerMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ManagedToUnmanagedOut, typeof(ShotHandlerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.UnmanagedToManagedIn, typeof(ShotHandlerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ElementOut, typeof(ShotHandlerMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ManagedToUnmanagedRef, typeof(ShotHandlerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.UnmanagedToManagedRef, typeof(ShotHandlerMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(ShotHandler), MarshalMode.ElementRef, typeof(ShotHandlerMarshaller))]
    public static class ShotHandlerMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static ShotHandler ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ShotHandler>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ShotHandler managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static ShotHandler ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ShotHandler>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(ShotHandler managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(ShotHandler managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public ShotHandler ToManaged() => Unsafe.As<ShotHandler>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static ShotHandler ConvertToManaged(IntPtr unmanaged) => Unsafe.As<ShotHandler>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(ShotHandler managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static ShotHandler ToManaged(IntPtr managed) => Unsafe.As<ShotHandler>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(ShotHandler managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

namespace Game
{
    [Unmanaged]
    [NativeMarshalling(typeof(TurretEnemyMarshaller))]
    public unsafe partial class TurretEnemy : Script
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TurretEnemy"/>.
        /// </summary>
        public TurretEnemy() : base()
        {
        }

        [Unmanaged]
        [DefaultValue(null)]
        public Prefab _bulletPrefab
        {
            get { return Internal_Get_bulletPrefab(__unmanagedPtr); }
            set { Internal_Set_bulletPrefab(__unmanagedPtr, FlaxEngine.Object.GetUnmanagedPtr(value)); }
        }

        [LibraryImport("Game", EntryPoint = "Game.TurretEnemy::Internal_Get_bulletPrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial Prefab Internal_Get_bulletPrefab(IntPtr __obj);

        [LibraryImport("Game", EntryPoint = "Game.TurretEnemy::Internal_Set_bulletPrefab", StringMarshalling = StringMarshalling.Custom, StringMarshallingCustomType = typeof(FlaxEngine.Interop.StringMarshaller))]
        internal static partial void Internal_Set_bulletPrefab(IntPtr __obj, IntPtr value);
    }
}
namespace Game.Interop
{

    /// <summary>
    /// Marshaller for type <see cref="TurretEnemy"/>.
    /// </summary>
    #if FLAX_EDITOR
    [HideInEditor]
    #endif
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ManagedToUnmanagedIn, typeof(TurretEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.UnmanagedToManagedOut, typeof(TurretEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ElementIn, typeof(TurretEnemyMarshaller.ManagedToNative))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ManagedToUnmanagedOut, typeof(TurretEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.UnmanagedToManagedIn, typeof(TurretEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ElementOut, typeof(TurretEnemyMarshaller.NativeToManaged))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ManagedToUnmanagedRef, typeof(TurretEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.UnmanagedToManagedRef, typeof(TurretEnemyMarshaller.Bidirectional))]
    [CustomMarshaller(typeof(TurretEnemy), MarshalMode.ElementRef, typeof(TurretEnemyMarshaller))]
    public static class TurretEnemyMarshaller
    {
    #pragma warning disable 1591
    #pragma warning disable 618
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class NativeToManaged
        {
            public static TurretEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TurretEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(TurretEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public static class ManagedToNative
        {
            public static TurretEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TurretEnemy>(ManagedHandleMarshaller.NativeToManaged.ConvertToManaged(unmanaged));
            public static IntPtr ConvertToUnmanaged(TurretEnemy managed) => managed != null ? ManagedHandle.ToIntPtr(managed, GCHandleType.Weak) : IntPtr.Zero;
            public static void Free(IntPtr unmanaged) {}
        }
    #if FLAX_EDITOR
        [HideInEditor]
    #endif
        public struct Bidirectional
        {
            ManagedHandleMarshaller.Bidirectional marsh;
            public void FromManaged(TurretEnemy managed) => marsh.FromManaged(managed);
            public IntPtr ToUnmanaged() => marsh.ToUnmanaged();
            public void FromUnmanaged(IntPtr unmanaged) => marsh.FromUnmanaged(unmanaged);
            public TurretEnemy ToManaged() => Unsafe.As<TurretEnemy>(marsh.ToManaged());
            public void Free() => marsh.Free();
        }
        internal static TurretEnemy ConvertToManaged(IntPtr unmanaged) => Unsafe.As<TurretEnemy>(ManagedHandleMarshaller.ConvertToManaged(unmanaged));
        internal static IntPtr ConvertToUnmanaged(TurretEnemy managed) => ManagedHandleMarshaller.ConvertToUnmanaged(managed);
        internal static void Free(IntPtr unmanaged) => ManagedHandleMarshaller.Free(unmanaged);
    
        internal static TurretEnemy ToManaged(IntPtr managed) => Unsafe.As<TurretEnemy>(ManagedHandleMarshaller.ToManaged(managed));
        internal static IntPtr ToNative(TurretEnemy managed) => ManagedHandleMarshaller.ToNative(managed);
    #pragma warning restore 618
    #pragma warning restore 1591
    }
}

#endif
