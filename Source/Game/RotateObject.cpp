#include "RotateObject.h"
#include <Engine/Engine/Time.h>
#include "Engine/Core/Log.h"
#include "Engine/Core/Math/Math.h"
RotateObject::RotateObject(const SpawnParams& params)
    : Script(params)
{
    // Enable ticking OnUpdate function
    _tickUpdate = true;
}

void RotateObject::OnUpdate()
{
    Rotate();
}

void RotateObject::Rotate()
{
    Quaternion rot = GetActor()->GetLocalOrientation();
    Quaternion delta = Quaternion();
    Quaternion::RotationAxis(_rotationAxis, _rotationSpeed * DegreesToRadians * Time::GetDeltaTime(), delta );
    GetActor()->SetLocalOrientation(rot * delta);
}
