#include "MovingEnemy.h"
#include "Engine/Engine/Time.h"

MovingEnemy::MovingEnemy(const SpawnParams& params)
	: Script(params)
{
	// Enable ticking OnUpdate function
	_tickUpdate = true;
}

void MovingEnemy::SetDestroysSelf(bool destroysSelf)
{
	_destroysSelf = destroysSelf;
}

void MovingEnemy::SetFollowPoints(const Array<ScriptingObjectReference<Actor>>& points)
{
	_followPoints.Clear();
	for (auto point : points)
	{
		_followPoints.Add(point);
	}
}

void MovingEnemy::AddFollowPoint(const ScriptingObjectReference<Actor>& newPoint)
{
	_followPoints.Add(newPoint);
}

void MovingEnemy::OnReset()
{
}

void MovingEnemy::OnEnable()
{

}

void MovingEnemy::OnDisable()
{
	// Here you can add code that needs to be called when script is disabled (eg. unregister from events)
}

void MovingEnemy::OnUpdate()
{
	if (_followPoints.IsEmpty())
	{
		return;
	}
	Vector3 currentPosition = GetActor()->GetPosition();
	Vector3 targetPosition = _followPoints.At(_currentFollowPointIndex)->GetPosition();

	Vector3 dir = targetPosition - currentPosition;
	float dist = dir.Length();

	dir.Normalize();
	float moveDist = _moveSpeed * Time::GetDeltaTime();
	dir *= moveDist;
	if (dist < moveDist)
	{
		if (_destroysSelf)
		{
			GetActor()->DeleteObject();
			return;
		}
		_currentFollowPointIndex++;
		if (_currentFollowPointIndex >= _followPoints.Count())
		{
			_currentFollowPointIndex = 0;
		}
	}
	
	GetActor()->AddMovement(dir);
}
