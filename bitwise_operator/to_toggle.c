/* Programme toggle LSB of a number*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num & 1 == 0)
	printf("\nAfter toggle the number is:%d",num|1);
	else
	printf("\nAfter toggle the number is:%d",num^1);
	return 0;
}
