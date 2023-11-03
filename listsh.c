#include<stdio.h>
struct list{
		char name[20];
		int price;
	};
int main()
{
	int i=0,n=0;
	char choice;
	
	 struct list obj[20];
	
	do
	{
		printf("Enter the name of product:");
		scanf("%s",obj[n].name);
		printf("Enter the price of product:");
		scanf("%d",&obj[n].price);
		n++;
	
        printf("Do you want to add more products? (y/n): ");
  		scanf(" %c",&choice);
 	} while(choice == 'y' || choice == 'Y');
	
 //	printf("Product List:\n");
 	printf("product name\t\tprice");
	printf("\n-----------------------------------\n");
	 for (i=0;i<n;i++) 
	{
	 
  	 printf("%s\t\t\t%d\n",obj[i].name, obj[i].price);
 	}
	
}
