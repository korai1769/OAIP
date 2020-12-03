#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k;
	printf("введите день:");
	scanf_s("%d", &k);
	n=k%7;
	printf("номер дня недели: %d", n);
	return 0;
}