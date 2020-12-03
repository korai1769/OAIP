#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a,b,c,n,s,kvadratC;
	printf("введите a:");
	scanf_s("%d", &a);
	printf("введите b:");
	scanf_s("%d", &b);
	printf("введите c:");
	scanf_s("%d", &c);
	n = (a / c) * (b / c);
	printf("можно разместить квадратов: %d\n", n);
	kvadratC = c * c;
	s = a * b - n * kvadratC;
	printf("не занятая площадь прямоугольника:%d", s);
	return 0;
}
