#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int x;
    printf("x:");
    scanf_s("%i", &x);
    if (x == 0) printf("�������");
    else {
        if (x > 0) printf("������������� ");
        else printf("������������� ");
        if ((x % 2) == 0) printf("������ ");
        else printf("�������� ");
    }
    printf("�����.");

    return 0;
}