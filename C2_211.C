main()
{
int a,b,c;
float s,area,t;
printf("\n value of a,b,c \n \n");
scanf("%d%d%d"&a,&b,&c);
s=(float)(a+b+c)/2;
t=(float)s*(s-a)*(s-b)*(s-c);
(float)area=pow(t,2);
printf("\n area=%f",area);
getch();
}