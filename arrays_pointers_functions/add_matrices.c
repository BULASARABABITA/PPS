#include<stdio.h>
int main()
{
	int A[10][10],i,r1,j,c1,B[10][10],r2,c2,C[10][10];
	printf("\nEnter the number of rows,number of columns of first matrix:\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter elements in rows and columns\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter the number of rows,number of columns of second matrix:\n");
	scanf("%d %d",&r2,&c2);
	printf("Enter elements in rows and columns\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	if(r1==r2 && c1==c2)
	{
		printf("\nThe addition of two matrices is:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				C[i][j] = A[i][j]+B[i][j];
				printf("%4d",C[i][j]);
			}
		printf("\n");	
		}
	}
	else
	printf("not possible to add matrices");
	return 0;
}
