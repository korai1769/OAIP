#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, X, Y;
	printf("введите вес конфет ");
	scanf_s("%d", &X);
	printf("введите стоимость конфет ");
	scanf_s("%d", &A);
	printf("введите другой вес конфет ");
	scanf_s("%d", &Y);
	A = A / X;
	A = A * Y;
	printf(" стоимость Y конфет %d\n", A);
	return 0;
}