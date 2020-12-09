#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("a:");
    scanf_s("%f", &a);
    printf("b:");
    scanf_s("%f", &b);
    printf("c:");
    scanf_s("%f", &c);
    printf("%d\n", (a < b + c) & (b < a + c) & (c < a + b));
    return 0;
}