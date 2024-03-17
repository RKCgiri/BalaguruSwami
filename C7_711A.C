#include <math.h>
main()
{
int i,j,n,x,f=1,m=1;
float s;
printf(" \n value of x,n \n ");
scanf("%d%d",&x,&n);
s=0;
for(i=1;i<=n;i+=2)
  { for(j=1;j<=i;j++)
   f=f*j;
   s=s+(pow(x,i)/f)*m;
   m=m*(-1);
  }
printf("\n \n sin(x)= %f",s);
getch();
}