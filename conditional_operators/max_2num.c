#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: ");scanf("%d %d",&x,&y);
	(x>y)?printf("%d is greater than %d.",x,y):
		(y>x)?printf("%d is greater than %d.",y,x):
			printf("The given numbers are equal.");
	return 0;
	
}
