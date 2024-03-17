main()
{
int a,b,c,d,m,n,t;
float x1,x2;
scanf("%d%d%d%d%d%d",a,b,c,d,m,n);
printf("the value of a,b,c.d,m,n");
//m=a*x1+b*x2;
//n=c*x1+d*x2;
t=a*d-b*c;
if(t!=0)
{
x1=(m*d-b*n)/(float)(t) ;
x2=(n*a-m*c)/(float)(t);
printf("%f\t%f ", x1,x2);
}
else
printf("it is not a linner equation");
getch();
}