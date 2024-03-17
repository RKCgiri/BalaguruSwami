#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
			for(j=0;j<=i;j++)
		printf("*");
		printf("\n");
	}
}