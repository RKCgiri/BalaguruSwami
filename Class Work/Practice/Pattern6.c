#include<stdio.h>
void main()
{
	int n,i,j,k,a=1;
	printf("Enter the number of rows \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("  ");
		for(k=0;k<=i;k++)
			printf("%2d",a++);
		printf("\n");
   }
}