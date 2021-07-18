#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the value of num:");
	scanf("%d",&num);
	if(num>0)
	   printf("positive");
	if(num<0)
	   printf("negative");
	if(num==0)
	   printf("%d",num);      
}
