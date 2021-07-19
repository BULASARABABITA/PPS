/* Programme to set LSB of a number*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The value of n after LSB is set is %d",num|1);
	return 0;
}
