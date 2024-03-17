main()
{
int i,sum,count;
i=101;
sum=count=0;
pp: if(i%7==0)
{printf("%d",i);
sum=sum+i;
count++;
i++
if(i<200) goto pp;
  printf("%d %d ",count,sum);
 }
  getch();
  }