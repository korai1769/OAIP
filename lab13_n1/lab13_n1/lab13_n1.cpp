#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    system("chcp 1251");
    float c,m;
    printf("цена:");
    scanf_s("%f", &c);
    for (m = 0.1; m < 1.1; m += 0.1)
        printf("%f kg = %f \n ", m, c * m);
    return 0;
}