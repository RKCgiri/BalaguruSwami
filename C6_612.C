main()
{
float bill;
int n;
printf("\n enter bill units ");
scanf("%d",&n);
if(n<=200)
bill=n*0.80;
else if (n<=300)
     bill=n*0.90;
     else
     bill=n*1;
   bill=bill+100;
   if (n>=400)
   bill=bill+bill*0.15;
   printf("\n final bill=%f",bill);
   getch();
   }