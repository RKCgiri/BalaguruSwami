#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
    int c=1;
       for(j=1;j<=i;j++)
        {
            printf("%d   ",c);
            c=c*(i-j)/j;
        }
        
     /*for(j=0;j<=i;j++)
    	{	if(i==0 || j==i)
    			a[i][j]=1;
    		else
    			a[i][j]=a[i-1][j]+a[i-1][j-1];

 		}*/
 			printf("%d ",a[i][j]);
				
    
        printf("\n");
    }
    return 0;
}
