#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int x,y;
    printf("введите x:");
    scanf_s("%d", &x);
    printf("введите y:");
    scanf_s("%d", &y);
    if (x > 0 & y > 0) {
        printf("1");
    }
    if (x < 0 & y > 0) {
        printf("2");
    }
    if (x < 0 & y < 0) {
        printf("3");
    }
    if (x > 0 & y < 0) {
        printf("4");
    }

    return 0;
}
