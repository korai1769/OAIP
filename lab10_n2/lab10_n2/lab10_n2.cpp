#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    int A, B, C;
    printf("A:");
    scanf_s("%i", &A);

    printf("B:");
    scanf_s("%i", &B);

    printf("C:");
    scanf_s("%i", &C);

    printf("%d\n", A<B<C);
    return 0;
}
