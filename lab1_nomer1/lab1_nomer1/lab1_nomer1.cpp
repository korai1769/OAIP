#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Russian");
	float a, b, sum, proizvedenie, kvadrata, kvadratb, raznost, delenie;
	printf("������� a � b: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b; //����� �����
	raznost = a - b; //�������� �����
	proizvedenie = a * b; //������������ �����
	kvadrata = a * a; //������� ����� a
	kvadratb = b * b; //������� ����� b
	delenie = a / b; //������� a � b
	printf("����� ����� %f\n", sum);
	printf("�������� ����� %f\n", raznost);
	printf("������������ %f\n", proizvedenie);
	printf("������� ����� %f\n", delenie);
	printf("������� ����� a %f\n", kvadrata);
	printf("������� ����� b %f\n", kvadratb);

	return 0;
}

