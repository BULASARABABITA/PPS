/* programme to input any number from user and check whether the most significant bit(LSB)
 of the given number is set (1) or not (0)*/
 #include<stdio.h>
 int main()
 {
 	int num,msb,bits;
 	printf("Enter the number:");
 	scanf("%d",&num);
 	bits = sizeof(int)*8;
 	msb = 1 << (bits - 1);
 	if(num & msb)
 	printf("MSB of %d is set(1).",num);
 	else
 	printf("MSB of %d is notset(0).",num);
 }
