#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	float a, b, sum, proizvedenie, kvadrata, kvadratb, chastnoe, raznost;
	a != 0;
	b != 0;

	printf("������� a � b: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b; //����� �����
	raznost = a - b; //�������� �����
	proizvedenie = a * b; //������������ �����
	kvadrata = a * a; //������� ����� a
	kvadratb = b * b; //������� ����� b
	chastnoe = kvadrata / kvadratb; //������� ��������� a � b
	printf("����� ����� %f\n", sum);
	printf("�������� ����� %f\n", raznost);
	printf("������������ %f\n", proizvedenie);
	printf("������� ��������� a � b %f", chastnoe);
	return 0;
}