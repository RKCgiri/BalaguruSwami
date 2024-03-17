main()
{
int number;
printf("enter the number");
scanf("%d",&number);
switch(number)
{
case( number%2==0) :
printf("the umber is even ");
break;
dafault:
printf("the number is odd");
}
getch();
}