#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, k, m;
	printf("������� A: ");
	scanf_s("%d", &A);
	k = A * A;
	m = A * k;
	m = k * m;
	k = m * m;
	k = k * m;
	printf("����� A = %d\n", k);
	return 0;
}
