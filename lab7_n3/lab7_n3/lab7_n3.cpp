#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, X, Y;
	printf("������� ��� ������ ");
	scanf_s("%d", &X);
	printf("������� ��������� ������ ");
	scanf_s("%d", &A);
	printf("������� ������ ��� ������ ");
	scanf_s("%d", &Y);
	A = A / X;
	A = A * Y;
	printf(" ��������� Y ������ %d\n", A);
	return 0;
}