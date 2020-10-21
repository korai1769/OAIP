#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Russian");
	float a, b, sum, proizvedenie, kvadrata, kvadratb, raznost, delenie;
	printf("введите a и b: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b; //сумма чисел
	raznost = a - b; //разность чисел
	proizvedenie = a * b; //произведение чисел
	kvadrata = a * a; //квадрат числа a
	kvadratb = b * b; //квадрат числа b
	delenie = a / b; //частное a и b
	printf("сумма чисел %f\n", sum);
	printf("разность чисел %f\n", raznost);
	printf("произведение %f\n", proizvedenie);
	printf("деление чисел %f\n", delenie);
	printf("квадрат числа a %f\n", kvadrata);
	printf("квадрат числа b %f\n", kvadratb);

	return 0;
}

