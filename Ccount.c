#include <stdio.h>

int main()
{	
	int counter = 0;
	char input;

	printf("Enter a string:");

	do
	{
		input = getchar();
		if((input == 'c') || (input == 'C'))
		{
			counter++;
		}
	}while(input != '\n');

	printf("The letter c was entered %d times\n", counter);

	return 0;
}
