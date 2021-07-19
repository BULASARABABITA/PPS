/*Program to input two angles from user and
 find third angle of the triangle */
 
#include <stdio.h>
int main()
{
	int angle1,angle3,angle2;
	printf("Enter two angles in a triangle ");
	scanf("%i %i", &angle1,&angle2);
	
	angle3= 180 - (angle1 + angle2);
	printf("\nThe third angle in the triangle is %i",angle3);
	
	return 0;
}
