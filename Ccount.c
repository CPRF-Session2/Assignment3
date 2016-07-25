/* Albert Zhang
   Counts cs*/
#include <stdio.h>
int main () {
	int ccount =0;
	char input;
	printf("Input a string: ");
	do
	{
		input = getchar();
		if (input == 'c' || input == 'C')
		{
			ccount++;
		}
	}
	while (input != '\n');
	printf("The letter C was inputted %d times. \n", ccount);
	return 0;
}

