#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'F':printf("Female");
		         break;
		case 'M':printf("Male");
		         break;
		default:printf("default");		         
	}
}
