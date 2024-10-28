#pragma once

enum class EnemyPhase {
	kApproach,
	kAttack,
	kLeave
};

class Enemy
{
public:
	Enemy();
	~Enemy();
	//

	void Update();

private:
	//
	void Approach();

	void Attack();

	void Leave();

	void(Enemy::*pFunc)();

private:

	static void (Enemy::* spFuncTable[])();

	EnemyPhase phase_ = EnemyPhase::kApproach;

	Enemy::* pFunc;
};

