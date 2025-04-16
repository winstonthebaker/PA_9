using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;
namespace Game;
public class DeathScreen : Script
{
    public UIControl _screen;

    private float _fadeDuration = 1.0f;
    private bool _fadingIn;
    private float _fadeTimer;
    public void Show()
    {
        _fadingIn = true;
        _fadeTimer = 0;
        _screen.Get<AlphaPanel>().Alpha = 0f;
        _screen.Control.Visible = true;
    }
    public void Hide()
    {
        _fadingIn = false;
        _screen.Get<AlphaPanel>().Alpha = 0f;
        _screen.Control.Visible = false;
    }
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
    }
}
