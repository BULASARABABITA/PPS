#include <stdio.h>
 int main()
{
	float bsalary,perc_da,perc_hra,DA,HRA,Net_salary;
 	printf("Enter basic salary ");
	scanf("%f",&bsalary);
	printf("\nEnter percentage of DA and HRA ");
 	scanf("%f %f",&perc_da,&perc_hra);
 	
 	DA = perc_da*bsalary/100;
 	HRA = perc_hra*bsalary/100;
	Net_salary = bsalary + DA + HRA ;
	printf("\nNet salary is %f ",Net_salary);
	return 0;
	
}
