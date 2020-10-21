#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, x3, AC, BC;
    printf("введите координату точки A: ");
    scanf_s("%f", &x1);
    printf("введите координату точки B: ");
    scanf_s("%f", &x2);
    printf("введите координату точки C: ");
    scanf_s("%f", &x3);
    AC = abs(x3 - x1); //расстояние между точками A и C
    BC = abs(x3 - x2); //расстояние между точками B и C
    printf("AC=%f\n", AC);
    printf("BC=%f", BC);
    return 0;
}