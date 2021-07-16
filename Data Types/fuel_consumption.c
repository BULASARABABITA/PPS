#include<stdio.h>
int main()
{
	float dist,fuel,avgconsumption;
	printf("\nenter the values:");
	scanf("%f%f",&dist,&fuel);
	avgconsumption = fuel/dist;
	printf("avgconsumption = %.2f",avgconsumption);
}
