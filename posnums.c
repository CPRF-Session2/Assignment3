/*Ashank Kumar find average, if numbers are prime and if they are relatively prime*/
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int true = 1;
	double avg;
	do
	{
		printf("Enter a number:");
		scanf("%d",&num1);
		if(num1 < 0)
		{
			printf("Invalid, only positive numbers allowed\n");
			continue;
		}
		printf("Enter a number:");
		scanf("%d",&num2);
		if(num2 < 0)
		{
			printf("Invalid only positive numbers allowed\n");
			continue;
		}
		else
		{
			true = 0;
		}
	}while(true);

	avg = ((double)(num1 + num2)) / 2.0;
	printf("The average of the two numbers is %lf\n",avg);
	

	for(int i = 2; i < num1; i++)
	{
		if(num1%i==0)
		{
			printf("%d is not a prime\n", num1);
			true = 1;
			break;
		}
	}
	if(!true)
	{
		printf("%d is prime\n", num1);
	}

	for(int x = 2; x < num2; x++)
	{
		if(num2%x==0)
		{
			printf("%d is not a prime\n", num2);
			true = 1;
			break;
		}
	}
	if(!true)
	{
		printf("%d is prime\n", num2);
	}

	true = 1;

	if(num2 > num1)
	{
		for(int y = 2; y < num1; y++)
		{
			if(num1%y==0 && num2%y==0)
			{
				printf("%d and %d are not relatively prime\n", num1, num2);
				true = 0;
				break;
			}
		}
	}
	else
	{
		for(int z = 2; z <num2; z++)
		{
			if(num1%z==0 && num2%z==0)
			{
				printf("%d and %d are not relatively prime\n",num1,num2);
				true = 0;
				break;
			}
		}
	}
	if(true)
	{			printf("%d and %d are relatively prime\n", num1, num2);
	}

	return 0;
}
