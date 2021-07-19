#include<stdio.h>
struct employee
{
	char name[100];
	int age;
	int employeeid;
	float salary;
}e;
int main()
{
	printf("Entering the information regarding empolyee details:");
	printf("\nEnter the name of the employee:");
	fgets(e.name,sizeof(e.name),stdin);
	printf("Enter the ID of the employee:");
	scanf("%d",&e.employeeid);
	printf("Enter the salary of the employee:");
	scanf("%f",&e.salary);

	printf("\nDisplaying information regarding the employee :");
	printf("\nName: %s",e.name);
	printf("Employee ID: %d",e.employeeid);
	printf("\nsalary: %.lf",e.salary);
	return 0;

}
