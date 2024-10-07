#include <stdio.h>
#include <Windows.h>
#include <random>
#include <time.h>


typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf_s("%d秒待って実行された\n", *s);
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

void DiceGame(/*PFunc p, */int& ans) {
	while (true) {
		printf_s("半(奇数)か丁(偶数)か\n");
		printf_s("半 : 1を入力\n");
		printf_s("丁 : 2を入力\n");
		scanf_s("入力 : %d", &ans);
		if (ans != 1 && ans != 2) {
			continue;
		}
		Sleep(3000);
	}
}

int main() {
	srand(0);
	int ans = 0;
	DiceGame(ans);

	return 0;
}