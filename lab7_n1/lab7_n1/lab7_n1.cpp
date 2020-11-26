#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float A, pi, Rad;
	pi = 3.14;
	printf("введите градусную меру угла (0 <= A < 360): ");
	scanf_s("%f", &A);
	Rad = pi * A / 180;
	printf(" Угол A имеет радиан: %f\n", Rad);
	return 0;
}