#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int x1, x2, y1, y2, a, b, p, s;
    printf("введите координату точки x1: ");
    scanf_s("%d", &x1);
    printf("введите координату точки x2: ");
    scanf_s("%d", &x2);
    printf("введите координату точки y1: ");
    scanf_s("%d", &y1);
    printf("введите координату точки y2: ");
    scanf_s("%d", &y2);
    a = abs(x2 - x1);
    b = abs(y2 - y1);
    p = (a + b) * 2;
    s = a * b;
    printf("Периметр прямоугольника P = %d\n", p);
    printf("Площадь прямоугольника S = %d", s);
    return 0;
}