#include<stdio.h>
int main()
{
	int number;
	float weight,cost,totalweight,totalcost;
	printf("\nenter the number:");
	scanf("%d",&number);
	printf("\nenter weight,cost:");
	scanf("%f%f",&weight,&cost);
	totalweight = number*weight;
	totalcost = number*cost;
	printf("totalweight = %f totalcost = %f",totalweight,totalcost);
	
    
}
