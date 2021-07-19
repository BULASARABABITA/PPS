/* using Conditional, 
assigning a number to another variable if it is positive.*/
#include<stdio.h>
int main()
{
   
    int num1= 2,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    num2= (num1>0) ? num1:0;       
    printf("\n%d %d",num1,num2);  
    return 0;
}

