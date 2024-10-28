#include "Motorcycle.h"
#include "stdio.h"

Motorcycle::Motorcycle(const char* name) : Vehicle(name)
{
	wheels_ = 2; // Motorcycleの車輪数を2に設定
}

void Motorcycle::GetNumWheels()
{
	printf_s("バイク\n");
	printf_s("%s : %d輪\n\n", name_, wheels_);
}
