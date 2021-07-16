#include<stdio.h>
int main()
{
	int p,n,r;
	float SI;
	printf("\nenter amount:",p);
	scanf("%d",&p);
	printf("\nenter no of years:",n);
	scanf("%d",&n);
	printf("\nenter rate:",r);
	scanf("%d",&r);
	
	SI=p*n*r/100.0;
	printf("\n simple intrest = %f",SI);
}
