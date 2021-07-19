/*Program to convert feets to inches */
#include <stdio.h>
int main()
{
	float feet, inch;
	printf("Enter number of feet ");
	scanf("%f",&feet);
	
	inch = (12)*feet ;
	printf("Number of inches is %f",inch);
	return 0;
}

