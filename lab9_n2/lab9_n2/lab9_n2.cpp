#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k;
	printf("������� ����:");
	scanf_s("%d", &k);
	n=k%7;
	printf("����� ��� ������: %d", n);
	return 0;
}