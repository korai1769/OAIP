#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float A, pi;
	pi = 3.14;
	printf("�������� ���� � �������� (0 <= a < 2�pi): ");
	scanf_s("%f", &A);
	A = A * (180 / pi);
	printf(" �������� ���� � ��������: %f\n", A);
	return 0;
}
