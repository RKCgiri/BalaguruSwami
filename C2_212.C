main()
{
int x,y,sum,sub,mul;
float d;
printf("\n enter the value of x and y \n");
scanf("%d%d",&x,&y);
sum=(x+y);
mul=(x*y);
printf("\n \n sum=%d \n mul=%d \n",sum,mul);
if(x>y)
{
sub=(x-y);
d=(float)x/y;
printf("\n  sub=%d \n d=%f \n",sub,d);
}
else
 if (x<y)
     {
      sub=(y-x);
      d=(float)y/x;
      printf("\n  sub=%d \n d=%f \n",sub,d);
      }
getch();
}

