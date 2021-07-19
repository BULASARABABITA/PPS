#include<stdio.h>
int main()
{
	int arr[100],i,large=0,n;
	printf("\nenter the  valueaof n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&arr[i]);
	 printf("\n");	
	}
	for(i=0;i<n;i++)
	{
		if(large<arr[i])
		large = arr[i];
		
	}
	printf("maximum element is=%d",large);
}

     

