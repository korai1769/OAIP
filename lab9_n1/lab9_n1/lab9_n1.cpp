#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, t;
	printf("������� ���-�� ������:");
	scanf_s("%d", &n);
	t = n % 60;
	printf("���������� �����: %d", t);
	return 0;
}