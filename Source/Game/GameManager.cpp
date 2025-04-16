#include "GameManager.h"
#include "Engine/Input/Input.h"
#include "Engine/Scripting/ManagedCLR/MClass.h"
#include "Engine/Scripting/ManagedCLR/MMethod.h"
#include "Engine/Core/Log.h"
#include "Engine/Level/Actor.h"
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
}

void GameManager::OnUpdate()
{
	if (Input::GetKeyDown(KeyboardKeys::R))
	{
		ResetGame();
	}
}

void GameManager::ShowDeathScreen()
{
	if (!_deathScreenActor)
	{
		return;
	}
	Script* deathScreen = _deathScreenActor->GetScript<Script>();
	if (deathScreen)
	{
		auto method = deathScreen->GetClass()->GetMethod("Show");
		if (!method)
		{
			return;
		}
		method->Invoke(deathScreen->GetOrCreateManagedInstance(), nullptr, nullptr);
	}

}

void GameManager::HideDeathScreen()
{
	if (!_deathScreenActor)
	{
		return;
	}
	Script* deathScreen = _deathScreenActor->GetScript<Script>();
	if (deathScreen)
	{
		auto method = deathScreen->GetClass()->GetMethod("Hide");
		if (!method)
		{
			return;
		}
		method->Invoke(deathScreen->GetOrCreateManagedInstance(), nullptr, nullptr);
	}
}

void GameManager::EndGame()
{
	_gameOver = true;
	ShowDeathScreen();
}

GameManager* GameManager::GetInstance()
{
	return _instance;
}

void GameManager::AddToResets(ICanReset* reset)
{
	_resets.Add(reset);
}

void GameManager::ResetGame()
{
	_gameOver = false;
	HideDeathScreen();
	for (ICanReset* reset : _resets)
	{
		if (reset)
			reset->Reset();
	}
}

