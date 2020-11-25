#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, k;
	printf("введите A: ");
	scanf_s("%d", &A);
	k = A * A;
	k = k * k;
	k = k * k;
	printf("число A = %d\n", k);
	return 0;
}
