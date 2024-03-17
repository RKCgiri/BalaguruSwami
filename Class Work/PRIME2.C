#include<stdio.h>
#include<conio.h>
#include <process.h>
main()
{
int n,count=1,j,i;
printf("\n enter n \n ");
scanf("%d",&n);
clrscr();
printf("\n prime numbrs are=");
for(i=1;i<=n;i++)
 {
  if(i==1) goto pp;
  if(i==2)
   {
   printf("%d",i);
   goto pp;
   }
  for(j=2;j<i;j++)
    {
     if(i%j==0)
     goto pp;
     }
      printf(" %d\t",i);
	    count++;
   pp:

 }
printf("\n count=%d",count);
getch();
}