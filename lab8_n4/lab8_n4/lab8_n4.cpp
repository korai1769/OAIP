#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int edinitsi, desyatki, chislo;
	printf("введите число:");
	scanf_s("%d", &chislo);
	desyatki = chislo / 10;
	edinitsi = chislo % 10;
	chislo = edinitsi * 10 + desyatki;
	printf("полученное число: %d", chislo);
	return 0;
}