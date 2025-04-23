#include "GameManager.h"
#include "Engine/Input/Input.h"
#include "Engine/Scripting/ManagedCLR/MClass.h"
#include "Engine/Scripting/ManagedCLR/MMethod.h"
#include "Engine/Core/Log.h"
#include "Engine/Level/Actor.h"
#include "PlayerController.h"
#include <Engine/Engine/Time.h>
#include "PlayerController.h"
GameManager* GameManager::_instance = nullptr;

GameManager::GameManager(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void GameManager::OnAwake()
{
	_instance = this;
	_time = _startingTime;
}

void GameManager::OnUpdate()
{
	UpdateTime();

	if (Input::GetKeyDown(KeyboardKeys::R))
	{
		ResetGame();
	}
}

void GameManager::OnStart()
{
	HideDeathScreen();
	HideWinScreen();
	ShowInfoText();
}


void GameManager::Win()
{
	_gameOver = true;
	ShowWinScreen();
	LOG_STR(Info, TEXT("won"));
	HideInfoText();
}

void GameManager::ShowDeathScreen()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("ShowDeathScreen");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}


void GameManager::HideDeathScreen()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("HideDeathScreen");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}

void GameManager::ShowWinScreen()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("ShowWinScreen");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}

void GameManager::HideWinScreen()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("HideWinScreen");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}

void GameManager::ShowInfoText()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("ShowInfoText");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}

void GameManager::HideInfoText()
{
	if (!_UIManager)
	{
		return;
	}
	Script* uiManager = _UIManager->GetScript<Script>();
	if (!uiManager)
	{
		return;
	}
	auto method = uiManager->GetClass()->GetMethod("HideInfoText");
	if (!method)
	{
		return;
	}
	method->Invoke(uiManager->GetOrCreateManagedInstance(), nullptr, nullptr);
}

void GameManager::UpdateTime()
{
	if (!_gameOver)
	{
		_time -= Time::GetDeltaTime();

	}

	if (!_UIManager)
	{
		return;

	}
	Script* uiManagerScript = _UIManager->GetScript<Script>();
	if (uiManagerScript)
	{

		auto method = uiManagerScript->GetClass()->GetMethod("UpdateTime", 3);
		if (method)
		{
			float time = _time;
			int pistolAmmo = _pistolAmmo;
			int shotgunAmmo = _shotgunAmmo;

			void* args[3];
			args[0] = &time;
			args[1] = &pistolAmmo;
			args[2] = &shotgunAmmo;

			method->Invoke(uiManagerScript->GetOrCreateManagedInstance(), args, nullptr);

		}
		else
		{
			LOG_STR(Info, TEXT("UpdateTime not found"));

		}
	}
	else
	{
		LOG_STR(Info, TEXT("uiManagerScript not found"));

	}
}

void GameManager::AddTime(float time)
{
	_time += time;
}

bool GameManager::IsGameOver()
{
	return _gameOver;
}

void GameManager::SetShotgunAmmo(int shotgunAmmo)
{
	_shotgunAmmo = shotgunAmmo;
}

void GameManager::SetPistolAmmo(int pistolAmmo)
{
	_pistolAmmo = pistolAmmo;
}


void GameManager::Lose()
{
	_gameOver = true;
	ShowDeathScreen();
	HideInfoText();
}

GameManager* GameManager::GetInstance()
{
	return _instance;
}



void GameManager::ResetGame()
{
	_time = _startingTime;
	OnReset();
	_gameOver = false;
	HideDeathScreen();
	HideWinScreen();
	ShowInfoText();
}

