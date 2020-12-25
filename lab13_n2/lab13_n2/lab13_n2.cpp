#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int n,i;
    float r = 1;
    printf("N:");
    scanf_s("%i", &n);
    for (i = 0; i <= n; ++i)
        r *= 1.0 + (float)i / 10;
    printf("result = %f \n ", r);
    return 0;
}