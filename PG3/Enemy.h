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
	void Approach();

	void Attack();

	void Leave();

	void Update();

private:
	//
	static void (Enemy::* spFuncTable[])();

	EnemyPhase phase_;
};

