#include<stdio.h>
int main()
{
	int n,i,j,l,h,m,num,index=-1;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Elements \n");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
//	printf("Enter to search \n");
//	scanf("%d",&num);l=0;
//	h=n-1;
	for(i=0;i<n-1;i++)
		{	index=i;
			for(j=i+1;j<n;j++)
				{
					if(a[index]>a[j])
						index =j;
					if(index!=i)	
						{
							int t=a[index];
							a[index]=a[i];
							a[i]=t;
						}
					}	
		}
	for(i=0;i<n;i++)	
		printf(" %d",a[i]);
}