using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;

namespace Game;

/// <summary>
/// InfoTextPanel Script.
/// </summary>
public class InfoTextPanel : Script
{
    public UIControl _screen;

    private float _fadeDuration = 5.0f;
    private float _fadeTimer;
    public void Show()
    {
        _fadeTimer = 0;
        _screen.Get<AlphaPanel>().Alpha = 1f;
        _screen.Control.Visible = true;
    }
    public void Hide()
    {
        _screen.Get<AlphaPanel>().Alpha = 0f;
        _fadeTimer = 5.0f;
        _screen.Control.Visible = false;
    }
    public override void OnUpdate()
    {
        if (_fadeTimer > 5.0f)
        {
            return;
        }

        _fadeTimer += Time.DeltaTime;
        float t = Mathf.Saturate(_fadeTimer / _fadeDuration);
        _screen.Get<AlphaPanel>().Alpha = 1 - t;


    }
}
