#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f1,*f2,*f3;
	char ch,str1[16],str2[16];
	printf("Enter the string to tranfer into the file \n");
	gets(str1);
//	printf("Enter the string to tranfer into the ");
	//gets(str2);
	f1=fopen("Ramayan.txt","w");
		f1=fopen("Ramayan3.txt","w");
	f2=fopen("Ramayan2.txt","w");
	fputs(str1,f1);
//	fputs(str2,f2);
	while(ch=getc(f1)!=EOF);
		fputc(ch,f3);
		
		
	printf("%s",str1);
	
}