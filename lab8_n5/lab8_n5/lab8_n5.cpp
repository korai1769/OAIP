#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, a, b, c, p;
	printf("������� �����:");
	scanf_s("%d", &x);
	a = x / 100;
	c = x % 100;
	p = c * 10 + a;
	printf("���������� �����: %d", p);
	return 0;
}