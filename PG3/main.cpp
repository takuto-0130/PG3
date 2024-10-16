#include <stdio.h>
#include <functional>
#include <Windows.h>
#include <random>
#include <time.h>


void setTimeout(int second) {
	Sleep(second * 1000);
}

int main() {
	srand((unsigned int)time(NULL));
	int ans = 0;
	int sleepTime = 3;
	std::function<void(int&)> input = [&](int& ans) {scanf_s("%d", &ans); };
	std::function<bool(int)> checkInput = [&](int ans) {
		return (ans == 0 || ans == 1); 
		};

	std::function<void(int)> randomDice = [&](int ans) {
		int dice = rand() % 6 + 1;
		if (dice % 2 == ans) {
			printf_s("正解 : サイコロの目%d\n\n\n", dice);
		}
		else {
			printf_s("不正解 : サイコロの目%d\n\n\n", dice);
		}};
	
	while (true) {
		printf_s("丁(偶数)か半(奇数)か\n");
		printf_s("丁 : 0を入力\n");
		printf_s("半 : 1を入力\n");
		printf_s("入力 : ");
		input(ans);
		if (checkInput(ans)) {
			setTimeout(sleepTime);
			randomDice(ans);
		}
		else{
			printf_s("無効な入力です\n\n");
		}
	}

	return 0;
}