/*print even numbers fron 200 to 300*/
#include<stdio.h>
int main()
{
	int i=200;
	while(i<=300)
	{
		if (i%2==0)
		{
		   printf("% d",i);
	    }
	    i+=1;
	}
}
