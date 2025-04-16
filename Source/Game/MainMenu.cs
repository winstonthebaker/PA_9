using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;
namespace Game;

/// <summary>
/// MainMenu Script.
/// </summary>
public class MainMenu : Script
{
    public List<UIControl> _buttons;
    public List<SceneReference> _scenes;

    private Dictionary<Button, SceneReference> _sceneLookup;
    public override void OnStart()
    {
        _sceneLookup = new Dictionary<Button, SceneReference>();
        for (int i = 0; i < _buttons.Count && i < _scenes.Count; i++)
        {
            _sceneLookup.Add(_buttons[i].Get<Button>(), _scenes[i]);
            _buttons[i].Get<Button>().ButtonClicked += OnButtonClicked;
        }
    }

    private void OnButtonClicked(Button button)
    {
        if (_sceneLookup.ContainsKey(button))
        {
            Level.ChangeSceneAsync(_sceneLookup[button]);
        }
    }

    
}
