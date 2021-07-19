#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	((ch >='A' && ch <='Z')||(ch >= 'a' && ch<='z'))?printf("Alphabet"):printf("Not alphabet");
	return 0;

}

