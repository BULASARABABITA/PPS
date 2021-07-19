/*Program to Print How Many Inputs are taken 
from Keyboard using Scanf.*/

#include <stdio.h>
int main ()
{
	int num1,num2,num3,n;
	
	n = scanf("%i\n%i\n%i",&num1,&num2,&num3);
	
	printf("\nNumber of inputs scanf statement took here is %i",n);
	return 0;
	
}
