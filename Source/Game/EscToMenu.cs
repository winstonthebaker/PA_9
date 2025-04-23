using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;

namespace Game;

/// <summary>
/// EscToMenu Script.
/// </summary>
public class EscToMenu : Script
{
    public SceneReference _menuScene;
    public override void OnUpdate()
    {
        if (Input.GetKeyUp(KeyboardKeys.Escape))
            Level.ChangeSceneAsync(_menuScene);
    }
}
