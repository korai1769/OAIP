#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	printf("������� a � b: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a;
	d = b;
	a = d;
	b = c;
	printf("����� a %d\n", a);
	printf("����� b %d\n", b);
	return 0;
}