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

	bool IsEnd() { return isEnd_; }

private:
	//
	void Approach();

	void Attack();

	void Leave();

	void PhaseSet(const EnemyPhase phase);

private:

	void(Enemy::* pFunc)();

	static void (Enemy::* spFuncTable[])();

	EnemyPhase phase_ = EnemyPhase::kApproach;

	bool isEnd_ = false;
};

