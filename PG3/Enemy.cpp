#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>


Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
	printf_s("接近中");
	/*Sleep(1000);
	for(size_t i = 0; i < 3; ++i)
	{
		printf_s(".");
		Sleep(1000);
	}
	printf_s("\n\n");
	phase_ = EnemyPhase::kAttack;*/
}

void Enemy::Attack()
{
	printf_s("攻撃！！");
	Sleep(2000);
	//phase_ = EnemyPhase::kLeave;
}

void Enemy::Leave()
{
	printf_s("離脱");
}

void Enemy::Update()
{
	(this->spFuncTable[static_cast<size_t>(phase_)]);
}

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave
};
