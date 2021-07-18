#include<stdio.h>
int main()
{
	int p;
	printf("\nEnter p:");
	scanf("%d",&p);
	if(p>=0 && p<40)
	   printf("failed");
	else if(p>=40 && p<60)
	   printf("second class");
	else if(p>=60 && p<70)
	   printf("first class");
	else if(p>=70 && p<=100)
	   printf("distinction");     
	
}
