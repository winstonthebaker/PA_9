#pragma once

#include "Engine/Scripting/Script.h"
#include "Engine/Core/Collections/Array.h"
#include "Engine/Scripting/ScriptingObjectReference.h"
#include "Engine/Core/Delegate.h"
API_CLASS() class GAME_API GameManager : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(GameManager);

private:
	void OnAwake() override;
	void OnUpdate() override;
	void OnStart() override;
	static GameManager* _instance;

	void ShowDeathScreen();
	void HideDeathScreen();

	void ShowWinScreen();
	void HideWinScreen();

	void ShowInfoText();
	void HideInfoText();
	bool _gameOver = false;
	void UpdateTime();
	int _shotgunAmmo;
	int _pistolAmmo;
public:
	void AddTime(float time);
	bool IsGameOver();
	void SetShotgunAmmo(int shotgunAmmo);
	void SetPistolAmmo(int pistolAmmo);
	API_FIELD() float _startingTime = 5;

	float _time;
	
	Delegate<> OnReset;

	void Lose();
	static GameManager* GetInstance();
	void ResetGame();

	void Win();
	API_FIELD() ScriptingObjectReference<Actor> _UIManager;
};
