#include<stdio.h>
#include<conio.h>

void main()
{ int i,j,len,hig,p;
char a[30];
i=0;
while((a[i]=getchar())!='\n')
i++;
len=i;
hig=i-1;
for(j=i-1;j>=0;j--)
if(isspace(a[j]))
break;
p=j;
if(!(isspace(a[0])))
   printf("%c.",a[0]);
for(i=1;i<p;i++)
  { 
    if (isspace(a[i])&&isalpha(a[i+1]))
    printf("%c.",a[i+1]);
  }
  for(j=p+1;j<len;j++)
  printf("%c",a[j]);
}