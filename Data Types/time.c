#include<stdio.h>
int main()
{
	int sec , hr , min ,s;
	
	printf("enter the value sec:",sec);
	scanf("%d",&sec);
	hr = sec / 3600;
    sec = sec%3600;
	min = sec/60;
	s = sec%60;
	printf("%d:%d:%d",hr,min,s);
	
}
