/* find biggest of 3 numbers.*/
#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if ((num1 > num2) && (num1 > num3))
	printf("num1 is biggest");
	else if (num2 > num3 )
	printf("num2 is biggest");
	else
	printf("num3 is biggest");
	return 0;
}

