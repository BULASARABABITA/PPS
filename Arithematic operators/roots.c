/*. Program to find roots of a Quadratic Equation */
#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,root1,root2,delta;
	printf("Enter the coefficients of the quadratic equation a(x^2)+ bx + c = 0 \n");
	scanf("%i\n",&a);
	scanf("%i\n",&b);
	scanf("%i",&c);
	delta = (pow(b,2))- 4*a*c ;
	root1 = ((b)+sqrt(delta))/(2*a);
	root2 = ((b)-sqrt(delta))/(2*a);
	printf("\nRoots of the given quad eqn are %i , %i",root1,root2);
	return 0;
	
}

