#include <stdio.h>
int main()
{
	float ave;

	int x,y, z, num1, num2, prim1, prim2;

	printf("Enter a number ");
	scanf("%d",&num1);
	printf(" Enter another number ");
	scanf("%d",&num2);

	ave=(num1 + num2)/2;

	printf("The average of the 2 numbers is %f\n", ave);

	for (prim1=2; prim1<=num1-1; prim1++)
	
	{
		if (num1% prim1==0)
		{
	printf("The first number isn't prime\n");

	break;
		}
	z++;

	}

	if (z==num1-2)
	{
		printf("The first number is a prime number\n");
	}
	if (num1==2)
		printf("The first number is a prime number\n");

		z=0;

	for (prim2=2; prim2<=num2-1;prim2++)
	{
		if (num2 % prim2==0)
				{
		printf("The second number isn't prime\n");
		break;
		}
		z++;
		}

	if (z==num2-2)
	{
		printf("The second number is prime\n");
	}
	if (num2==2)
		printf("The second number is prime\n");
	for (x=1;x<=num1 && x<=num2;x++)
	{
	
		if (num1 % x==0 && num2 % x==0)
y=x;
	}
	
	if (y==1)
	{
		printf("The numbers are relatively prime\n");

	}

	else {
		printf("The numbers aren't relatively prime\n");
	}


/*	int n, i, prim=0;

	printf("Enter a number ");
	scanf("%d", &n);

	for (i=2; i<=n/2;++i)

	{
		if(n%i==0)
		{
			prim=1;
			break;
		}}
	if (prim==0)
		printf("%d is a prime number.", n);
	else printf("%d is not a prime number.",n);*/

	return 0;
}
