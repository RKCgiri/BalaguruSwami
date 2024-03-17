#include<stdio.h>
int main()
{
	int n,i,j,l,h,m,num,index=-1;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Elements \n");
	int a[n],key;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
//	printf("Enter to search \n");
//	scanf("%d",&num);l=0;
//	h=n-1;
	for(i=1;i<n;i++)
		{	key=a[i];
			j=i-1;
			while(j>=0 && a[j]>key)
				{
					a[j+1]=a[j];
					j--;
				}
			a[j+1]=key;	
		}	
		
		
	for(i=0;i<n;i++)	
		printf(" %d",a[i]);
}