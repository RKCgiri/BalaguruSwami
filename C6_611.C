main()
{
int a,b,c ;
printf ("enter the valus of a,b,c ");
scanf("%d%d%d",&a,&b,&c);
if(a*a+b*b)==c*c
{ if(b*b+c*c)==a*a
   if(c*c+a*a)==b*b
   printf("these are three sides of a right angle triangle");
}
else printf("these are not sides of a triangle");
getch();
}