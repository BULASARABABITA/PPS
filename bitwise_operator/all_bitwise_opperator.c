/* programme to read 2 numbers and demonstrate all bitwise operators using them*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("\na & b is %d",a&b);
	printf("\na | b is %d",a|b);
	printf("\na^b is %d",a^b);
	printf("\nThe value of a after left shift is %d",a<<1);
	printf("\nThe value of a after right shift is %d",a>>1);
	printf("\n~a is %d",~a);
	return 0;
}
