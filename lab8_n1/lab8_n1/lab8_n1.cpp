#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, k;
	printf("введите размер файла:");
	scanf_s("%d", &a);
	k = a / 1024;
	printf("Количество полных килобайтов: %d", k);
	return 0;
}