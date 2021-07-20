/* To find the reverse of a given number(Egi/p 6758 o/p=8576)*/
#include<stdio.h>
int main()
{
	int a,r,rev=0;
	printf("\nEnter the value of a:");
	scanf("%d",&a);
	while(a>0)
	{
		r = a%10;
		rev = rev*10+r;
		a = a/10;
	}
	printf("%d",rev);
}
