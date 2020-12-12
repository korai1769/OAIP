#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int a, b, c, ras1, ras2;
    printf("введите координату точки A:");
    scanf_s("%d", &a);
    printf("введите координату точки B:");
    scanf_s("%d", &b);
    printf("введите координату точки C:");
    scanf_s("%d", &c);
    ras1 = abs(a - b);
    ras2 = abs(a - c);
    if (ras1 < ras2)
        printf("Ближайшая к точке А точка B и растояние между ними %d: ", ras1);
    else printf("Ближайшая к точке А точка C и растояние между ними %d: ", ras2);
    return 0;
}
