#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k, s;
	printf("введите день:");
	scanf_s("%d", &k);
	printf("введите n:");
	scanf_s("%d", &n);
	s = (k + n - 2) % 7 + 1;
	printf("номер дня недели: %d", s);
	return 0;
}
