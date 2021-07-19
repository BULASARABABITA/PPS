#include<stdio.h>
#include<string.h>
int main()
{
	char Name[100],Gen;
	printf("Enter your name: ");
	scanf("%s",Name);
	printf("Enter your gender(M/F): ");
	scanf("\n%c",&Gen);
	
	(Gen=='F')?printf("\nWelcome to C programme Ms.%s.",Name):printf("\nWelcome to C programme Mr.%s.",Name);
	return 0;
}
