#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int x1, x2, x3, AC, BC, z;
    printf("������� ���������� ����� A: ");
    scanf_s("%d", &x1);
    printf("������� ���������� ����� B: ");
    scanf_s("%d", &x2);
    printf("������� ���������� ����� C: ");
    scanf_s("%d", &x3);
    AC = abs(x3 - x1); //���������� ����� ������� A � C
    BC = abs(x3 - x2); //���������� ����� ������� B � C
    z = AC * BC;
    printf("������������:%d", z);
    return 0;
}