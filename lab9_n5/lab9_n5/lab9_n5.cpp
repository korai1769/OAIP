#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int god, vek;
	printf("введите номер года:");
	scanf_s("%d", &god);
	vek = ((god - 1) / 100) + 1;
	printf("это год столетия: %d", vek);
	return 0;
}
