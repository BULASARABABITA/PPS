#include<stdio.h>
int main()
{
	int A[100],size,i,search,stop;
	printf("\nEnter tbe size of array");
	scanf("%d",&size);
	printf("\nEnter the %d elements of an array:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter the search element:");
	scanf("%d",&search);
	stop = 0;
	for(i=0;i<size;i++)
	{
		if(A[i] == search)
		{
			stop = 1;
			break;
		}
	}
	if(stop == 1)
	{
		printf("\n We find the search element %d at position %d",search,i+1);
	}
	else
	{
		printf("\nElement not found %d",search);
	}
	return 0;
}
