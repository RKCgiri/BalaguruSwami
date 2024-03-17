#include<math.h>
main()
{
int i,j,f;
float s=0,t;
for(i=1;i<=10;i++)
 {
  f=1;
  for(j=1;j<=i;j++)
   f=f*j;
  t=1.00000/f;
  s=s+t;
  }
printf("\n \n \n e=%f",s);
s=s+1;
printf("\n \n \n e=%f",s);
getch();
}
