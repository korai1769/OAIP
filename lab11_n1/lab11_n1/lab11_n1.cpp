#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int a, b; 
	printf("Введите числа А и В: "); 
	scanf_s("%d %d", &a, &b); 
	if (a == b) 
		a = b = 0;
	if (a > b)
		b = a;
	else a = b;
	printf("Число А=%d\nЧисло В=%d\n", a, b); 
	return 0;
}