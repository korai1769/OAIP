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
    if (x == 0) printf("Нулевое");
    else {
        if (x > 0) printf("Положительное ");
        else printf("Отрицательное ");
        if ((x % 2) == 0) printf("чётное ");
        else printf("нечётное ");
    }
    printf("число.");

    return 0;
}