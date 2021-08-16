#include<stdio.h>
int main()
{
    int n,A[n],i,sum=0,average;
    printf("\nEnter n value:");
    scanf("%d",&n);
    printf("\nEnter the n values:");
    for(i=1;i<=n;i++)
    
	   scanf("%d",&A[i]);
    printf("\n");
    
	for(i=1;i<=n;i++)
	{
	    sum = sum + A[i];
	}
	
	for(i=1;i<=n;i++)
	{
	    average = sum/n;	
	}
	printf("sum is = %d",sum);
	printf("\naverage is = %d",average);
    
    
	
		          
}
