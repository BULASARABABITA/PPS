#include<stdio.h>
int main()
{
	int i,j;
	printf("\nEnter the value of j:");
	scanf("%d",&j);
	for (i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",j,i,j*i);
	}
	getch();
	
}
