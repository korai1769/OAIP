#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k, s;
	printf("������� ����:");
	scanf_s("%d", &k);
	printf("������� n:");
	scanf_s("%d", &n);
	s = (k + n - 2) % 7 + 1;
	printf("����� ��� ������: %d", s);
	return 0;
}
