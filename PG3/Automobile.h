#pragma once
#include "vehicle.h"

// 乗用車クラス
class Automobile : public Vehicle
{
public:
	Automobile(const char* name);

	void GetNumWheels() override;
};

