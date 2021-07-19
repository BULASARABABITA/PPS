/* Programme to find no. of bits in an integer number*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\nNumber of bits in %d is %d",num,sizeof(num)*8);
	return 0;
}
