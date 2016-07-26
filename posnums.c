/*MADELEINE CHARITY Write a program posnums.c that reads 2 positive integers from the user, and prints the average of the two (this should be printed as a floating point number.), whether each number is a prime number or not, and whether the two numbers are relatively prime or not (the only positive integer that divides both of them evenly is 1).*/
#include <stdio.h>
int main()
{
	int x;
	int y;
	float avg;
	int i=1;
	
	do{
		printf("Enter a number:\n");
		if (scanf("%d", &x)==0)
		{ 
			printf("Not valid\n");
			while(getchar()!='\n');
		}
		else 
			break;
	}
	while (x==0);
	do {
		printf("Enter another number:\n");
		if (scanf("%d",&y)==0)
		{
			printf("Not valid\n");
			while(getchar()!='\n');
		}
		else 
			break;
	}
	while (y==0);
//	printf("test");
	avg=(((float)x+(float)y)/2);
	printf("The average is %f\n", avg);
	printf("test");
	while (i<x);
	{
		i++;
		if (x%i==0)
		{
			printf("%d is not prime\n", x); 
		}
		else if (i<x)
			continue;
		else
			printf("%d is prime\n",x);
	}
	i=1;
	while (i<y);
	{
		i++;
		if (y%i==0)
			printf("%d is not prime\n", y);
		else 
			printf("%d is prime\n", y);
	}
	i=1;
	while (i<y&&i<x);
	{	
		i++;
		if (y%i==0 && x%i==0)
			printf("%d and %d are not relatively prime\n", x,y);
		else 
			printf("%d and %d are relatively prime\n",x,y);
}
	return 0;
}
