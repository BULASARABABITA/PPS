/* Read 10 numbers and find the sum of negative numbers */
#include<stdio.h>
int main()
{
	int i,size,num;
	printf("Enter the count of numbers: ");
	scanf("%d",&size);
	int j=0;
	int count=0;
	do{
		scanf("%d\n",&num);
		do{
			if (num<0){count+=num;}
			j++;
		}while(j<=size);
		i++;
	}while(i<=size-2);
	
	
	printf("\nSum of negative integers is %i" , count);
}
