#include <stdio.h>
#include <functional>
#include <Windows.h>
#include <random>
#include <time.h>
#include "Comparison.h"



int main() {
	Comparison<int, float> a1(10, 3.3f);
	Comparison<int, double> a2(5, 9.7);
	Comparison<float, int> a3(2.5f, 8);
	Comparison<float, double> a4(4.6f, 3.7);
	Comparison<double, int> a5(2.3, 3);
	Comparison<double, float> a6(3.25, 3.3f);


	printf_s("%.03lf\n\n", static_cast<double>(a1.Min()));
	printf_s("%.03lf\n\n", static_cast<double>(a2.Min()));
	printf_s("%.03lf\n\n", static_cast<double>(a3.Min()));
	printf_s("%.03lf\n\n", static_cast<double>(a4.Min()));
	printf_s("%.03lf\n\n", static_cast<double>(a5.Min()));
	printf_s("%.03lf\n\n", static_cast<double>(a6.Min()));


	return 0;
}