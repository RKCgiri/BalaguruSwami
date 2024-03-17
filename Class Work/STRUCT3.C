#include<stdio.h>
#include<conio.h>
main()
{
float r;
struct product_price
 {  char name[15];
 int snum;
 float price;
 };
struct product_price pp[15];
int i,n,j,t;
pp[0].price=1.1;
printf("\n enter the number of products \n ");
scanf("%d",&n);
printf("\n enter product name and price\n");

for(i=0;i<n;i++)
{ printf(" enter snum\n");
  scanf("%d",&pp[i].snum);
  fflush(stdin);
  printf(" enter price \n");
  fflush(stdin);
  scanf("%f",&r);
  pp[i].price=r;
  printf(" enter name of product\n");
  fflush(stdin);
  scanf("%s",pp[i].name);
 }
//print
printf("\n serisal no\t product name\tproduct price\n");
printf("---------------------------------------------\n");
for(i=0;i<n;i++)
{ printf("\n%d",pp[i].snum);
  printf("\t\t %s",pp[i].name);
  printf("\t\t %f",pp[i].price);
}
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1-i;j++)
 { if (pp[j].price>pp[j+1].price)
   { t=pp[j].price;
     pp[j].price=pp[j+1].price;
     pp[j+1].price=t;
    }
   }
  }
printf("\n heighest price is: %f",pp[i].price);
printf("\n serial no :%d \t the product is :%s",pp[i].snum ,pp[i].name);
getch();
return(0);
}