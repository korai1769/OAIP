#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    int A;
    printf("A:");
    scanf_s("%i", &A);
    A = abs(A);
    printf("%d\n", A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100);
    return 0;
}