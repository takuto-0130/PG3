#include "Automobile.h"
#include "stdio.h"

Automobile::Automobile(const char* name) : Vehicle(name)
{
	wheels_ = 4; // Automobileの車輪数を4に設定
}

void Automobile::GetNumWheels()
{
	printf_s("乗用車\n");
	printf_s("%s : %d輪\n\n", name_, wheels_);
}
