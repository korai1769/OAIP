#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

setlocale(LC_ALL, "Rus");
system("chcp 1251");
float x, y, s, p;
printf("������� ������� ��������������:");
scanf_s("%f", &x );
scanf_s("%f", &y);
s=x*y; //�������
p=2*(x+y); //��������
printf("������� %f\n",s);
printf("�������� %f",p);
return 0;
}