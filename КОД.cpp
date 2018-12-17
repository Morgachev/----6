#include "pch.h"
#include "stdafx.h"
#include "math.h"
#include "windows.h"
#include <iostream>


int main() {
	setlocale(LC_ALL, "Ukrainian");
	double a, b, z, x, y, e = 2.7;
	printf("Введiть z: ");
	scanf_s("%lf", &z);
	printf("Введiть x: ");
	scanf_s("%lf", &x);
	printf("Введiть y: ");
	scanf_s("%lf", &y);
	if (y != 0 && (x + y) >= 0 && x != 0) {
		a = -4 * z * (pow(sqrt((sqrt(x + y)) / (y * y)), 3) - fabs(3 * y + (1 / (5 * x)))) + (e * e * e);
		printf("a = %lf\n", a);
		if (x != 0 && (pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3) / x) >= 0) {
			b = sqrt((x * x) + a - (y * y) * pow(sin(x + z), 3) / x) + sin(27);
			printf("b = %lf\n", b);
		}
		else {
			printf("Помилка\n");
		}

	}
	else {
		printf("Помилка\n");
	}
	system("pause");
	return 0;
}