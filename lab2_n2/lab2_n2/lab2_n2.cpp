#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, x3, AC, BC;
    printf("������� ���������� ����� A: ");
    scanf_s("%f", &x1);
    printf("������� ���������� ����� B: ");
    scanf_s("%f", &x2);
    printf("������� ���������� ����� C: ");
    scanf_s("%f", &x3);
    AC = abs(x3 - x1); //���������� ����� ������� A � C
    BC = abs(x3 - x2); //���������� ����� ������� B � C
    printf("AC=%f\n", AC);
    printf("BC=%f", BC);
    return 0;
}