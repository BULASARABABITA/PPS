#include<stdio.h>
int main()
{
	int a[100],size,i,sum;
	float avg;
	printf("\nEnter the size of array:");
	scanf("%d",&size);
	printf("Enter %d numbers:\n",size);
	for(i=0;i<size;i++)
	         scanf("%d",&a[i]);
	printf("\n");
	sum=0;
	for(i=0;i<size;i++)
	         sum+=a[i];
	printf("\nSum of given numbers = %d",sum);
	avg = (float)sum/i;
	printf("\nAverage of given numbers = %0.2f",avg);
	return 0;		          
}
