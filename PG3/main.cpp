#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	if (a > b) {
		return b;
	}
	return a;
}
template <>
char Min<char>(char a, char b) {
	printf_s("数字以外は代入できません\n");
	return 0;
}

int intA = 3;
int intB = 9;

float floatA = 3.5f;
float floatB = 8.7f;

double doubleA = 5.37;
double doubleB = 2.917;

int main() {
	printf_s("%d\n", Min<int>(intA, intB));
	printf_s("%f\n", Min<float>(floatA, floatB));
	printf_s("%lf\n", Min<double>(doubleA, doubleB));
	Min<char>(6, 3);
	return 0;
}