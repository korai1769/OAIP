#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    float A, B, C;
    printf("A:");
    scanf_s("%f", &A);
    printf("B:");
    scanf_s("%f", &B);
    printf("C:");
    scanf_s("%f", &C);
    printf("%d\n", (A*A == B * B + C * C) | (B * B == A * A + C * C) | (C * C == A * A + B * B));
    return 0;
}