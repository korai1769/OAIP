#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,B,X;
	printf("������� ���������� A: ");
	scanf_s("%d", &A);
	printf("������� ���������� B: ");
	scanf_s("%d", &B);
	X = (-1) * B / A;
	printf(" X �����: %d\n", X);
	return 0;
}
