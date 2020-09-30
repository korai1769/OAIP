#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	float pi = 3.14;
	float L, d;
	printf("введите диаметр:");
	scanf_s("%f", &d);
	L = pi * d; //длина окружности
	printf("длина окружности %f", L);

	return 0;
}