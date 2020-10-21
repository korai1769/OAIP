#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, y1, y2, x3, y3, a, b, c, p, s, x, y, z, w, q, v;
    printf("введите координату точки x1: ");
    scanf_s("%f", &x1);
    printf("введите координату точки x2: ");
    scanf_s("%f", &x2);
    printf("введите координату точки y1: ");
    scanf_s("%f", &y1);
    printf("введите координату точки y2: ");
    scanf_s("%f", &y2);
    printf("введите координату точки x3: ");
    scanf_s("%f", &x3);
    printf("введите координату точки y3: ");
    scanf_s("%f", &y3);
    x = (x2 - x1) * (x2 - x1);
    y = (y2 - y1) * (y2 - y1);
    z = (x3 - x2) * (x3 - x2);
    w = (y3 - y2) * (y3 - y2);
    q = (x1 - x3) * (x1 - x3);
    v = (y1 - y3) * (y1 - y3);
   // a = sqrt(pow(x2 - x1) + pow(y2 - y1));
    //b = sqrt(pow(x3 - x2) + pow(y3 - y2));
    //c = sqrt(pow(x1 - x3) + pow(y1 - y3));
    a = sqrt(x + y);
    b = sqrt(z + w);
    c = sqrt(q + v);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Площадь: %f\n", s);
    printf("Периметр %f:", a + b + c);
    return 0;
}