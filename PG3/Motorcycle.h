#pragma once
#include "vehicle.h"

// バイククラス
class Motorcycle : public Vehicle
{
public:
	Motorcycle(const char* name);

	void GetNumWheels() override;
};

