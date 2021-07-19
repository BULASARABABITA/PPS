/*Programme to flip bits of a binary number*/
#include<stdio.h>
int main()
{
	int num,flip;
	printf("Enter a number");
	scanf("%d",&num);
	flip = ~num;
	printf("after flipping bits %d",flip);
	return 0;
	
}
