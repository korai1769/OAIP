#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("N:");
    scanf_s("%i", &n);

    int r = 0;
    int i;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        r += i;
        printf("%i \n ", r);
    }
    return 0;
}