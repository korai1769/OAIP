#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");

	float a, b, sum, proizvedenie, chastnoe, raznost;
	a != 0;
	b != 0;

	printf("введите a и b: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b; //сумма чисел
	raznost = a - b; //разность чисел
	proizvedenie = a * b; //произведение чисел
	chastnoe = (abs(a)) / (abs(b)); //частное модулей a и b
	printf("сумма чисел %f\n", sum);
	printf("разность чисел %f\n", raznost);
	printf("произведение %f\n", proizvedenie);
	printf("частное модулей a и b %f", chastnoe);
	return 0;
}