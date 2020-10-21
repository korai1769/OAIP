#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int x1, x2, x3, AC, BC, z;
    printf("введите координату точки A: ");
    scanf_s("%d", &x1);
    printf("введите координату точки B: ");
    scanf_s("%d", &x2);
    printf("введите координату точки C: ");
    scanf_s("%d", &x3);
    AC = abs(x3 - x1); //расстояние между точками A и C
    BC = abs(x3 - x2); //расстояние между точками B и C
    z = AC * BC;
    printf("произведение:%d", z);
    return 0;
}