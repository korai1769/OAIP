#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, k;
	printf("������� A: ");
	scanf_s("%d", &A);
	k = A * A;
	k = k * k;
	k = k * k;
	printf("����� A = %d\n", k);
	return 0;
}
