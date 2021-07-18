#include<stdio.h>
int main()
{
	char c;
	printf("\nEnter the c:");
	scanf("%c",&c);
	if((c>='a' && c<='z')||
	   (c>='A' && c<='Z'))
	   printf("%c is alphabet",c);
}
