#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	printf("введите a и b: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a;
	d = b;
	a = d;
	b = c;
	printf("число a %d\n", a);
	printf("число b %d\n", b);
	return 0;
}