#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, k;
	printf("������� a � b:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	k = a % b;
	printf("����� ��������� ����� �������: %d", k);
	return 0;
}