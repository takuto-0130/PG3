#include "Enemy.h"



Enemy::Enemy()
{
	phase_ = EnemyPhase::kApproach;
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
}

void Enemy::Attack()
{
}

void Enemy::Leave()
{
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
