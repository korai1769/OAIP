#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int a, b, c, ras1, ras2;
    printf("������� ���������� ����� A:");
    scanf_s("%d", &a);
    printf("������� ���������� ����� B:");
    scanf_s("%d", &b);
    printf("������� ���������� ����� C:");
    scanf_s("%d", &c);
    ras1 = abs(a - b);
    ras2 = abs(a - c);
    if (ras1 < ras2)
        printf("��������� � ����� � ����� B � ��������� ����� ���� %d: ", ras1);
    else printf("��������� � ����� � ����� C � ��������� ����� ���� %d: ", ras2);
    return 0;
}
