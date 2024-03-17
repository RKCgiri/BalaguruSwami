#include<stdio.h>
#include<conio.h>
main()
{
int x;
int *p,**q;
p=&x;
q=&p;
printf("\nvalue of x \n");
scanf("%d",&x);
printf("\nvalue of x :%d\n",x);
printf("addresh of x is :%u\n",&x);
printf("addresh of x is :%x\n",&x);
printf("addresh of x is :%u\n",p);
printf("addresh of x is :%x\n",p);
printf("addresh of p is :%u\n",&p);
printf("addresh of p is :%x\n",q);
printf("\nvalue at p :%d\n",*p);
printf("\nvalue at q :%d\n",**q);
getch();
return(0);
}