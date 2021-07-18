#include<stdio.h>
int main()
{
	char c;
	printf("\nEnter the character c:");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	   printf("%c is lowercase alphabet",c);
	if(c>='A' && c<='Z')
	   printf("%c is uppercase alphabet",c);
	else
	   return 0;      
}
