#include<stdio.h>
main()
{
char t;
float x;
int angle;
printf("\n enter an angle");
scanf("%f",&x);
x=x*3.141180/180 ;
printf("\n enter type of function")  ;
fflush(stdin);
scanf("%c",&t);
t=getchar();
t='s';
switch (toupper(t))
{
case 'S':
printf("\n %5.2f",sin(x));
break;
case 'C':
printf("\n %f",cos(x));
break;
case 'T':
printf("\n %f",sin(x)/cos(x));
break;
default:
printf("\n wrong choice");
}
getch();
}