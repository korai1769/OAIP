#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e, f;
	printf("������� a, b, c: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	d = a;
	e = b;
	f = c;
	a = f;
	c = e;
	b = d;

	printf("����� a %d\n", a);
	printf("����� b %d\n", b);
	printf("����� c %d\n", c);
	return 0;
}
