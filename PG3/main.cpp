#include <stdio.h>

int RecursionSalary(int hour) {
	if (hour == 1) {
		return 100;
	}
	return RecursionSalary((hour - 1)) * 2 - 50;
}

void money(int hour) {
	int salary = 0;
	int recursionSalaly = 0;
	for (int i = 1; i <= hour; i++) {
		int salary = i * 1072;
		printf_s("%d時間働いたとき\n", i);
		printf_s("一般的な資金体系 : %d円\n", salary);
		recursionSalaly += RecursionSalary(i);
		printf_s("再帰的な資金体系 : %d円\n\n", recursionSalaly);
	}
}

int main() {
	money(8);
	return 0;
}