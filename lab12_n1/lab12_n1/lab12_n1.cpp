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
printf("Понедельник\n") ;
break;
case 2:
printf("Вторник\n") ;
break;
case 3:
printf("Среда\n") ;
break;
case 4:
printf("Четверг\n") ;
break;
case 5:
printf("Пятница\n") ;
break;
case 6:
printf("Суббота\n") ;
break;
case 7:
printf("Воскресенье\n") ;
break;
}
return 0;
}