main()
{
int i,count,sum ;
i=0;
count=sum=0;
pp: if (i%6==0&& i%4!=0);
{
count++
sum =sum+i;
printf("%d \n",i);
    }
    i++        ;
    if(i<=100) goto pp;
    printf(" \n count=%d \t sum=%d ",count,sum);
    getch();
    }