#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float pi=3.414,f,g;
	printf("\nsides of rectangle a,b:");
	scanf("%d%d",&a,&b);
	printf("\nradius of circle c:");
	scanf("%d",&c);
	d = a*b;
	e = a+b+a+b;
	f = pi*c*c;
	g = 2*pi*c;
	printf("areaofrectangle=%d,perimeterofrectangle=%d,areaofcircle=%f,perimeterofcircle=%f",d,e,f,g);

}
