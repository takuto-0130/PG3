#include <stdio.h>
#include <functional>
#include <Windows.h>
#include <random>
#include <time.h>
#include "Enemy.h"



int main() {
	Enemy* enemy;
	enemy = new Enemy();
	while(!enemy->IsEnd())
	{
		enemy->Update();
	}
	delete enemy;

	return 0;
}