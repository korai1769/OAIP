#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, v;
	printf("������� a, b, c: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	v = a;
	a = c;
	c = v;
	v = a;
	a = b;
	b = v;
	printf("����� a %d\n", a);
	printf("����� b %d\n", b);
	printf("����� c %d\n", c);
	return 0;
}
