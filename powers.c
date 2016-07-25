#include <stdio.h>
int main ()
{
	int square=2;
	float num;

	printf("Please enter a number ");

	scanf("%f", &num);

	while (num>square)
	{
		printf("%d\n", square);
		square*=2;
	}

	return 0;
}

