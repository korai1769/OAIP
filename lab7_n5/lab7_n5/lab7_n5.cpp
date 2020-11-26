#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,B,X;
	printf("Введите коэфициент A: ");
	scanf_s("%d", &A);
	printf("Введите коэфициент B: ");
	scanf_s("%d", &B);
	X = (-1) * B / A;
	printf(" X равен: %d\n", X);
	return 0;
}
