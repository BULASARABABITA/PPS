/*6.Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year. */
#include<stdio.h>
int main()
{
	int day,years,weeks,days;
	printf("Enter the number of days: ");
	scanf("%d",&day);
	years = day/365;
	weeks = day/7;
	days = day - (7*weeks) ;
	
	printf("It is %d years, %d weeks and %d days.",years,weeks,days);
	
	return 0;
}
