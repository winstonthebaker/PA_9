#pragma once

#include "Engine/Scripting/Script.h"
#include "ICanReset.h"
#include "Engine/Core/Collections/Array.h"
#include "Engine/Scripting/ScriptingObjectReference.h"

API_CLASS() class GAME_API GameManager : public Script
{
API_AUTO_SERIALIZATION();
DECLARE_SCRIPTING_TYPE(GameManager);

private:
	Array<ICanReset*> _resets;
	void OnAwake() override;
	void OnUpdate() override;

	static GameManager* _instance;
	void HideDeathScreen();
	bool _gameOver = false;
public:

	void EndGame();
	static GameManager* GetInstance();
	void AddToResets(ICanReset* reset);
	void ResetGame();
	void ShowDeathScreen();
	API_FIELD() ScriptingObjectReference<Actor> _deathScreenActor;
};
