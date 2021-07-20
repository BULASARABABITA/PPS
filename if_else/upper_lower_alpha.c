/*Check whether the given character is uppercase or lowercase alphabet */
#include<stdio.h>
int main()
{
	char ch,i;
	printf("Enter a Character: ");
	scanf("%c",&ch);
	
	for (i='A';i<='Z';i++)
	{
		if(ch==i)
			printf("The alphabet entered is UpperCase.");
	}
	
	for (i='a';i<='z';i++)
	{
		if(ch==i)
			printf("The alphabet entered is LowerCase.");
	}
	
	return 0;
}
