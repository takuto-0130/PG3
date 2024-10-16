#include <stdio.h>
#include <Windows.h>
#include <random>
#include <time.h>


typedef void (*PFunc)(int*);
void setTimeout(int* second) {
	Sleep(*second * 1000);
}

void RandomDice(int* ans) {
	int dice = rand() % 6 + 1;
	if (dice % 2 == *ans) {
		printf_s("正解 : サイコロの目%d\n\n\n", dice);
	}
	else {
		printf_s("不正解 : サイコロの目%d\n\n\n", dice);
	}
}

void DiceGame(PFunc pTime, int second, PFunc randomDice, int& ans) {
	while (true) {
		ans = 0;
		printf_s("丁(偶数)か半(奇数)か\n");
		printf_s("丁 : 0を入力\n");
		printf_s("半 : 1を入力\n");
		printf_s("入力 : ");
		scanf_s("%d", &ans);
		if (ans == 0 || ans == 1) {
			pTime(&second);
			randomDice(&ans);
		}
	}
}

int main() {
	srand(0);
	int ans = 0;
	PFunc p = setTimeout;
	PFunc random = RandomDice;
	DiceGame(p, 3, random, ans);

	return 0;
}