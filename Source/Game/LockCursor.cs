﻿using System;
using System.Collections.Generic;
using FlaxEngine;

namespace Game;

/// <summary>
/// LockCursor Script.
/// </summary>
public class LockCursor : Script
{
    /// <inheritdoc/>
    public override void OnStart()
    {
        // Here you can add code that needs to be called when script is created, just before the first game update
    }
    
    /// <inheritdoc/>
    public override void OnEnable()
    {
        // Here you can add code that needs to be called when script is enabled (eg. register for events)
    }

    /// <inheritdoc/>
    public override void OnDisable()
    {
        // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
    }

    /// <inheritdoc/>

    [Serialize]
    public bool Lock = true;
    public override void OnUpdate()
    {
        if (Lock)
        {
            Screen.CursorVisible = false;
            Screen.CursorLock = CursorLockMode.Locked;
        }

    }
}
