#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int v1,v2,t,s;
	printf("������� �������� ������� ���������� ");
	scanf_s("%d", &v1);
	printf("������� �������� ������� ���������� ");
	scanf_s("%d", &v2);
	printf("������� ���������� ����� ������������  ");
	scanf_s("%d", &s);
	printf("������� ����� �������� �����������  ");
	scanf_s("%d", &t);
	v1 = v1 + v2;
	s = s + v1 * t;
	printf(" ���������� ����� ������������ ����� t ����� %d\n", s);
	return 0;
}