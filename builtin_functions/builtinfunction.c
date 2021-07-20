/*Find square ,cube, power, squareroot, floor ,
ceil of a number using built-in function.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float num;
	printf("Enter a number: ");
	scanf("%f",&num);
	
	printf("Square of the number is %.2f.",pow(num,2));
	printf("\nCube of the number is %.2f.",pow(num,3));
	
	printf("\nFloor of the number is %i.",(int) floor(num));
	
	printf("\nCeil of the number is %i.",(int) ceil(num)); 
	
	
}
