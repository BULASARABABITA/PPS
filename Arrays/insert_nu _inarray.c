#include<stdio.h>
int main()
{
	int A[100],i=0,n,value,size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("\nEnter the numbers\n");
	for(i=0;i<size;i++)
	    scanf("%d",&A[i]);
	printf("\n");
	printf("\nEnter the position num that you wanna inserta(acc. to array index):");
	scanf("%d",&n);
	printf("\nEnter the value that you wanna insert:");
	scanf("%d",&value);
	for(i=size;i>=n;--i)
	{
		A[i+1]=A[i];
		
    }
    A[n]=value;
    printf("\n");
    for(i=0;i<=size;i++)
        printf("%4d",A[i]);
    return 0;    
}
