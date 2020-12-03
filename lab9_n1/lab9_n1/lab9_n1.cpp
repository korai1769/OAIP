#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, t;
	printf("введите кол-во секунд:");
	scanf_s("%d", &n);
	t = n % 60;
	printf("полученное число: %d", t);
	return 0;
}