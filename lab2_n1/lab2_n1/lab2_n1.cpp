#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, y1, y2, s, y, z;
    printf("введите x1, x2, y1, y2: ");
    scanf_s("%f", &x1);
    scanf_s("%f", &x2);
    scanf_s("%f", &y1);
    scanf_s("%f", &y2);
    y = (x2 - x1) * (x2 - x1);
    z = (y2 - y1) * (y2 - y1);
    s = sqrt(y + z);

    printf("расстояние между точками равно:%f", s);
    return 0;
}