#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


int main(void)
{
	setlocale(LC_CTYPE, "");
	int x;
	printf("x:");
	scanf_s("%i", &x);
	if ((x % 2) == 0) printf("Чётное ");
	else printf("Нечётное ");
	if (x > 99) printf("трёхзначное ");
	else if ((99 >= x) & (x > 9)) printf("двухзначное ");
	else if (x <= 9)  printf("однозначное ");
	printf("число.");

	return 0;
}