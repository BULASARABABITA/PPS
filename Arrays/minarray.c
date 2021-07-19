#include<stdio.h>
int main()
{
	int arr[100],i,min=0,n;
	printf("\nenter the  valueaof n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&arr[i]);
	 printf("\n");	
	}
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min = arr[i];
		
	}
	printf("minimum element is=%d",min+1);
}

     
	
	
	
	

