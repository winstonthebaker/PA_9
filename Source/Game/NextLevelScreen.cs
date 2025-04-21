using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;

namespace Game;

/// <summary>
/// NextLevelScreen Script.
/// </summary>
public class NextLevelScreen : Script
{
    public UIControl _screen;

    private float _fadeDuration = 1.0f;
    private bool _fadingIn;
    private float _fadeTimer;
    private bool _canProceed = false;
    public void Show()
    {
        _canProceed = true;
        _fadingIn = true;
        _fadeTimer = 0;
        _screen.Get<AlphaPanel>().Alpha = 0f;
        _screen.Control.Visible = true;
    }
    public void Hide()
    {
        _canProceed = false;
        _fadingIn = false;
        _screen.Get<AlphaPanel>().Alpha = 0f;
        _screen.Control.Visible = false;
    }
    public SceneReference _nextLevel;
    public override void OnUpdate()
    {
        if (_fadingIn)
        {
            _fadeTimer += Time.DeltaTime;
            float t = Mathf.Saturate(_fadeTimer / _fadeDuration);
            _screen.Get<AlphaPanel>().Alpha = t;
            if (t >= 1f)
            {
                _fadingIn = false;

            }
        }
        if (_nextLevel == null)
        {
            return;
        }
        if (!_canProceed)
        {
            return;
        }
        if (Input.GetKeyDown(KeyboardKeys.Spacebar))
        {
            Level.ChangeSceneAsync(_nextLevel);

        }
    }
}
