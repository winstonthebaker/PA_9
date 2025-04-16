#pragma once

#include "Engine/Scripting/Script.h"

class ICanReset
{
public:
	virtual ~ICanReset() = default;
	virtual void Reset() = 0;
};
