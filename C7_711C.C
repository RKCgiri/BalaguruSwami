#include<math.h>
main()
{
int i,j,n,k;
float f,sum =0,t;
printf(" \n n");
scanf("%d",&n);
for (i=1;i<=n;i++)
  {
  //for (j=1;j<=n;j++)

     t=pow(i,i) ;

     f=1/t;
     sum=sum+f;}
     printf("\n %f \n",sum);

getch();
}
