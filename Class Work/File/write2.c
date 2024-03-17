#include<stdio.h>
void main()
{
	FILE *f;
	int n;
	char a='A',str[16];
	printf("Enter the string to tranfer into the file \n");
	gets(str);
	printf("Enter the no to tranfer into the file \n");
	scanf("%d",&n);
	f=fopen("Mahavarat.txt","w");
	fputs("Krishna arjun bheem karna judistir ",f);
	putc("K",f);
	putc(a,f);
	fputs(str,f);
    fprintf(f,"The mahavart was written by bash dev %d",n);
}