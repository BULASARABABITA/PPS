#include<stdio.h>
int main()
{
	long id;
	float hours,salary,wage;
	printf("\n enter id:");
	scanf("%ld",&id);
	printf("enter hours salary:");
	scanf("%f%f",&hours,&salary);
	wage = hours*salary;
	printf("id=%ld ,wage=%f ",id,wage);
	
	
}
