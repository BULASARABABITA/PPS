#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,x3,x4;
	float dist;
	printf("\nenter point1:");
	scanf("%d%d",&x1,&x2);
	printf("\nenter point2:");
	scanf("%d%d",&x3,&x4);
	dist = sqrt(pow(x1-x3,2)+pow(x2-x4,2));
	printf("dist = %f",dist);
}
