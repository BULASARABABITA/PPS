#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("LSB is set to %d",num&1);
	return 0;
}
