#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_CTYPE, "");
    int a1, a2, a3, sum;
    printf("первое число:");
    scanf_s("%d", &a1);
    printf("второе число:");
    scanf_s("%d", &a2);
    printf("третье число:");
    scanf_s("%d", &a3);
    if ((a1 >= a2) & (a1 >= a3)) {
        if (a2 >= a3) {
            printf("%d\n", a1 + a2);
        }
        else printf("%d\n", a1 + a3);
    }
    else if ((a2 >= a1) & (a2 >= a3))
        if (a1 >= a3) {
            printf("%d\n", a1 + a2);
        }
        else printf("%d\n", a2 + a3);
    else
        if (a1 >= a2) {
            printf("%d\n", a1 + a3);
        }
        else printf("%d\n", a2 + a3);
    return 0;
}
