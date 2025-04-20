#include "FloatingMine.h"
#include "ShotHandler.h"
#include "Engine/Level/Actor.h"
#include "GameManager.h"
#include "Engine/Core/Log.h"
#include "Explodes.h"
FloatingMine::FloatingMine(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void FloatingMine::OnEnable()
{
	ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
	if (shotHandler)
	{
		//LOG_STR(Info, TEXT("Bound!"));
		shotHandler->OnShot.Bind<FloatingMine, &FloatingMine::GetShot>(this);
		LOG_STR(Info, TEXT("GetShot bound"));
	}
	if (_col)
	{
		_col->TriggerEnter.Bind<FloatingMine, &FloatingMine::OnTriggerEnter>(this);
	}

}

void FloatingMine::OnDisable()
{
	ShotHandler* shotHandler = GetActor()->GetScript<ShotHandler>();
	if (shotHandler)
	{
		shotHandler->OnShot.UnbindAll();
	}
	if (_col)
	{
		_col->TriggerEnter.UnbindAll();
	}

}

void FloatingMine::OnUpdate()
{
	// Here you can add code that needs to be called every frame
}

void FloatingMine::OnDestroy()
{
	GameManager::GetInstance()->OnReset.Unbind<FloatingMine, &FloatingMine::OnReset>(this);
}

void FloatingMine::GetShot()
{
	Explodes* explodes = GetActor()->GetScript<Explodes>();
	if (explodes)
	{
		explodes->Explode();
	}
	if (_existsOnStart)
	{
		GetActor()->SetIsActive(false);
	}
	else
	{
		GetActor()->DeleteObject();
	}
}

void FloatingMine::OnStart()
{
	GameManager::GetInstance()->OnReset.Bind<FloatingMine, &FloatingMine::OnReset>(this);
}

void FloatingMine::OnReset()
{
	GetActor()->SetIsActive(true);
}
void FloatingMine::OnTriggerEnter(PhysicsColliderActor* other)
{
	GetActor()->DeleteObject();
	Explodes* explodes = GetActor()->GetScript<Explodes>();
	if (explodes)
	{
		explodes->Explode();
	}
}