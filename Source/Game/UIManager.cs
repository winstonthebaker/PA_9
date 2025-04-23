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
        if (_pistolText != null)
        {
            if (pistolAmmo > 0)
            {
                _pistolText.Get<TextBox>().Text = pistolAmmo.ToString();
                _pistolText.Get<TextBox>().Visible = true;

            }
            else
            {
                _pistolText.Get<TextBox>().Visible = false;
            }
        }
        if (_shotgunText != null)
        {
            if(shotgunAmmo > 0)
            {
                _shotgunText.Get<TextBox>().Text = shotgunAmmo.ToString();
                _shotgunText.Get<TextBox>().Visible = true;
            }
            else
            {
                _shotgunText.Get<TextBox>().Visible = false;
            }
        }
        if(_timeText != null)
        {
            string timeString = "0.0";
            if(time > 0)
            {
                timeString = time.ToString("F1");
            }
            _timeText.Get<TextBox>().Text = timeString;
        }
    }
    public void BeatLevel()
    {

    }
    public UIControl _progressBarLeft;
    public UIControl _progressBarRight;
    public UIControl _pistolText;
    public UIControl _shotgunText;
    public UIControl _timeText;
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
