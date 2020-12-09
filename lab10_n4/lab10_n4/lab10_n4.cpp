#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    int A;
    printf("A:");
    scanf_s("%i", &A);
    printf("%d\n", (A > 9) & (A < 100) & (A % 2 == 0));
    return 0;
}