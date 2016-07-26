/* accepts a number as an input and prints all powers of 2 such that 2^n is less than that number. Handle invalid input accordingly. */
#include <stdio.h>
#include <math.h>
int main ()
{
	float check=0;
	int n=0;
	do 
	{	
		printf("Enter a number:\n");
		if(scanf("%d", &n)==0) /*if invalid input*/
			{
			printf("Not a number\n");
			while (getchar()!='\n');
			}
	}
	while (n==0);
/*	printf("Your number is %d\n", n);*/
	int power=0;
	int product=0;
	for (power=0;product<n;power++) /*prints power of two*/
	{
		product = pow(2,power);
		if (product<n)
			printf("Power of two:%d\n", product);

	}

	return 0;
}
