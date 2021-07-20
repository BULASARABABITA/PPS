/* to find Sum of digits in a number */
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the number:");
    scanf("%i",&n);
    sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("The sum of digits of given number is %i", sum);
}
