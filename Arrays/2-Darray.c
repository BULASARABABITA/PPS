#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("\nEnter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("\nEnter the number with space and hit enter.\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("2D Array is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
