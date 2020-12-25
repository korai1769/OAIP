#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    float a,a2=1,r=1;
    printf("A:");
    scanf_s("%f", &a);
    int n,i;
    printf("N:");
    scanf_s("%i", &n);
    for (i = 2; i <= n; ++i)
    {
        a2 *= a;
        r += a2;
    }
    printf("%f \n ", r);

    return 0;
}