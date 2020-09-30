#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

setlocale(LC_ALL, "Rus");
system("chcp 1251");
float x, y, s, p;
printf("введите стороны прямоугольника:");
scanf_s("%f", &x );
scanf_s("%f", &y);
s=x*y; //площадь
p=2*(x+y); //периметр
printf("площадь %f\n",s);
printf("периметр %f",p);
return 0;
}