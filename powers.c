/*Ashank Kumar, prints powers of 2 less then inputted num*/
/*Add check for wrong input*/
#include <stdio.h>
#include <math.h>

int main()
{
	double num;
	int valid;

	do
	{
		valid = 1;
		printf("\nEnter a number:");

		if(scanf("%lf",&num)==0)
		{
			valid = 0;
			printf("Not a number\n");
			while(getchar()!='\n');
		}
	}while(valid==0);

	for(double i = 1; i < num; i++)
	{
		printf("%lf\n",pow(2,i));
	}

	return 0;
}
