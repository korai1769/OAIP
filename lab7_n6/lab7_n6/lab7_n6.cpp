#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A1, B1, C1, A2, B2, C2, D, x, y;
	printf("Введите коэффициенты A1, B1, C1: ");
	scanf_s("%d", &A1);
	scanf_s("%d", &B1);
	scanf_s("%d", &C1);
	printf("Введите коэффициенты A2, B2, C2: ");
	scanf_s("%d", &A2);
	scanf_s("%d", &B2);
	scanf_s("%d", &C2);
	D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;
	printf(" x равен: %d\n", x);
	printf(" y равен: %d\n", y);
	return 0;
}