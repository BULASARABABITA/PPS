  
/* programm to convert days into months and years*/
#include<stdio.h>
#include<math.h>
int main()
{
	float days,year,months;
	printf("\nEnter the no.of days:");
	scanf("%f",&days);
	year = days/365;
	months = (days/30); 
	printf("\nThe no.of months is: %f",months);
	printf("\nThe no.of years is: %f",year);
	
	return 0;
}
