#include<stdio.h>

struct complex
{
	int real1,real2;
	int imaginary1,imaginary2;
	
}C;
int main()
{
	struct complex c1,c2;
	printf("\n Enter the real no:");
	scanf("%d",&c1.real1);
	printf("\n Enter the imagianry no:");
	scanf("%d",&c1.imaginary1);
	printf("\nThe complex number is: %d+i%d",c1.real1,c1.imaginary1);

	printf("\n Enter the real2 no:");
	scanf("%d",&c2.real2);
	printf("\n Enter the imaginary2:");
	scanf("%d",&c2.imaginary2);
	printf("\n the complex number is : %d +i%d",c2.real2,c2.imaginary2);
	
	return 0;
}
