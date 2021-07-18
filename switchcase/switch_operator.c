#include<stdio.h>
int main()
{
	char opp;
	int a,b;
	printf("Enter the character");
	scanf("%c",&opp);
	printf("enter the integers a and b");
	scanf("%d%d",&a,&b);
	switch(opp)
	{
		case '+':printf("add = %d",a+b);
		         break;
		case '-':printf("diff = %d",a-b);
		         break;
		case '*':printf("prod = %d",a*b);
		         break;
		case '/':printf("divide = %d",a/b);         
				 break;
		case '%':printf("percent = %d",a%b);
		         break;
		default :printf("default");		   
		
				          
	}
}
