#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int v1,v2,t,s;
	printf("введите скорость первого автомобил€ ");
	scanf_s("%d", &v1);
	printf("введите скорость второго автомобил€ ");
	scanf_s("%d", &v2);
	printf("введите рассто€ние между автомобил€ми  ");
	scanf_s("%d", &s);
	printf("¬ведите врем€ удалени€ автомобилей  ");
	scanf_s("%d", &t);
	v1 = v1 + v2;
	s = s + v1 * t;
	printf(" –ассто€ние между автомобил€ми через t часов %d\n", s);
	return 0;
}