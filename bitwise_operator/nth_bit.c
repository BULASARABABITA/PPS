/* Programme to check nth bit of a number whether it is 0 or 1*/
#include<stdio.h>
int main()
{
	int num,bit;
	printf("Enter the number and a bit:");
	scanf("%d %d",&num,&bit);
	num=num>>(bit-1);
	if((num&1)!=0)
	{
		printf("%d is set",bit);
	}
	else
	{
		printf("%d is notset",bit);
	}
	return 0;
}
