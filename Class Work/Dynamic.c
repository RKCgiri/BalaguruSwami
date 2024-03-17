#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	p=(int*)malloc(n *sizeof(int));
	printf("The elements are \n");
	for(int i=0;i<n;i++)
		printf("%d ",*(p+i));
		return 0;
}