#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	(ch >= '0' && ch <= '9')?printf("It ia a Digit"):printf("It ia not a Digit");
	return 0;
}


