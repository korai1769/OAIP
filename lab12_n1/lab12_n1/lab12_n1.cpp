#include <stdio.h>
#include <stdlib.h>
int main(void)
{
system("chcp 1251");
int day;
printf("day:") ;
scanf_s ("%i", &day);

switch (day) {
case 1:
printf("�����������\n") ;
break;
case 2:
printf("�������\n") ;
break;
case 3:
printf("�����\n") ;
break;
case 4:
printf("�������\n") ;
break;
case 5:
printf("�������\n") ;
break;
case 6:
printf("�������\n") ;
break;
case 7:
printf("�����������\n") ;
break;
}
return 0;
}