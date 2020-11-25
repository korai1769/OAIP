#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, x1, x2, y;
	printf("введите x: ");
	scanf_s("%d", &x);
	x1 = (x-3)*(x-3)*(x-3)* (x - 3) * (x - 3) * (x - 3);
	x2 = (x-3)*(x-3)*(x-3);
	y = 4 * x1 - 7 * x2 + 2;
	printf("значение функции y = %d\n", y);
	return 0;
}


