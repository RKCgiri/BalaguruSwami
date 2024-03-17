#include<stdio.h>
#include<conio.h>
main()
{
 char firstname[10],middlename[10],lastname[10];
 printf(" \nenter the  name \n");
 scanf("%s%s%s",firstname,middlename,lastname);
 printf("the sthort name is : ");
 printf("%c.%c.%s\n",firstname[0],middlename[0],lastname);
 getch();
 return(0);
 }