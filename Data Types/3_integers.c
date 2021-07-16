#include<stdio.h>
int main()
{
	int num1,num2,num3,sum,product,average;
	printf("\nenter the values:");
	scanf("%d%d%d",&num1,&num2,&num3);
	sum = num1+num2+num3;
	product = num1*num2*num3;
	average = sum/3;
	printf("sum=%d,product=%d,average=%d",sum,product,average);
     	
}
