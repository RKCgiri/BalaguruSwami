			  // programming exersises(overview of c) 2.4
main()
{
float a,b,c,x,t;
printf("\n enter the value of a,b,c \n");
scanf("%f%f%f",&a,&b,&c);
t=b-c;
if(t!=0)
{
x=(float)a/t;
printf("\n %f ",x);
}
else
printf("\n infinity");
getch();
}