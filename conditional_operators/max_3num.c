#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&x,&y,&z);
	(x>y&&x>z)?printf("%d is greater than %d and %d.",x,y,z):
		(y>x&&y>z)?printf("%d is greater than %d and %d.",y,x,z):
			printf("%d is greater than %d and %d.",z,x,y);
	return 0;
	
	
}
