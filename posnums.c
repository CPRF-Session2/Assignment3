/* Drew French */

/* Gets the average of
 * 2 positive integers
 * and determines if they
 * are prime & relatively
 * prime.
 */

#include <stdio.h>

int num1;
int num2;
int n;
int prime1 = 1;
int prime2 = 1;
int relprime = 1;

int main()
{
	printf("Enter the first number here: ");
	scanf("%d", &num1);
	printf("Enter the second number here: ");
	scanf("%d", &num2);
	
	printf("Average: %g\n", (num1 + num2) / (float) 2);
	
	for(n = 2; n < (num1 / 2); n++)
	{
		if(num1 % n == 0)
		{
			prime1 = 0;
		}
	}
	
	for(n = 2; n < (num2 / 2); n++)
	{
		if(num2 % n == 0)
		{
			prime2 = 0;
		}
	}
	
	if(prime1 == 1)
	{
		printf("%d is prime.\n", num1);
	}
	else
	{
		printf("%d is not prime.\n", num1);
	}
	
	if(prime2 == 1)
	{
		printf("%d is prime.\n", num2);
	}
	else
	{
		printf("%d is not prime.\n", num2);
	}
	
	if(prime1 == 1 && prime2 == 1)
	{
		printf("%d and %d are relatively prime.\n", num1, num2);
	}
	else
	{
		for(n = 2; n < (num1 / 2); n++)
		{
			if(num1 % n == 0 && num2 % n == 0)
			{
				relprime = 0;
			}
		}
	}
	
	if(relprime == 1)
	{
		printf("%d and %d are relatively prime.\n", num1, num2);
	}
	else
	{
		printf("%d and %d are not relatively prime.\n", num1, num2);
	}
	
	return 0;
}