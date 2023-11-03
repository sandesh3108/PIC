#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of element in array:");
	scanf("%d",&n);
	
	int arr[n],i;
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe entered array is :");
	
		for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
