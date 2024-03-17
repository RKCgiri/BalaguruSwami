#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for(k=0;k<=i;k++)
			printf(" ");
		for(j=0;j<n-i;j++)
			printf("*");
		printf("\n");
	}
}