using System;
using System.Collections.Generic;
using FlaxEngine;
using FlaxEngine.GUI;

namespace Game;

/// <summary>
/// UIManager Script.
/// </summary>
public class UIManager : Script
{

    public DeathScreen _deathScreen;
    public NextLevelScreen _nextLevelScreen;
    public InfoTextPanel _infoTextPanel;
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
    public override void OnUpdate()
    {

    }
    public void UpdateTime(float time, int pistolAmmo, int shotgunAmmo)
    {
        UpdateTimeBar(time);
    }
    public void BeatLevel()
    {

    }
    public UIControl _progressBarLeft;
    public UIControl _progressBarRight;
    private void UpdateTimeBar(float time)
    {
        if (_progressBarLeft != null && _progressBarRight != null)
        {
            float fillAmount = Mathf.Saturate(time / 30f);
            _progressBarLeft.Get<ProgressBar>().Value = fillAmount;
            _progressBarRight.Get<ProgressBar>().Value = fillAmount;
        }

    }

    public void ShowDeathScreen()
    {
        if (_deathScreen != null)
        {
            _deathScreen.Show();
        }
    }
    public void HideDeathScreen()
    {
        if (_deathScreen != null)
        {
            _deathScreen.Hide();
        }
    }
    public void ShowWinScreen()
    {
        if (_nextLevelScreen != null)
        {
            _nextLevelScreen.Show();
        }
    }
    public void HideWinScreen()
    {
        if (_nextLevelScreen != null)
        {
            _nextLevelScreen.Hide();
        }
    }
    public void ShowInfoText()
    {
        if (_infoTextPanel != null)
        {
            _infoTextPanel.Show();
        }
    }
    public void HideInfoText()
    {
        if (_infoTextPanel != null)
        {
            _infoTextPanel.Hide();
        }
    }
}
