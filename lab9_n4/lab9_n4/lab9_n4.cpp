#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a,b,c,n,s,kvadratC;
	printf("������� a:");
	scanf_s("%d", &a);
	printf("������� b:");
	scanf_s("%d", &b);
	printf("������� c:");
	scanf_s("%d", &c);
	n = (a / c) * (b / c);
	printf("����� ���������� ���������: %d\n", n);
	kvadratC = c * c;
	s = a * b - n * kvadratC;
	printf("�� ������� ������� ��������������:%d", s);
	return 0;
}
