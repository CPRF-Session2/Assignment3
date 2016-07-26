/* Drew French */

/* Input a number to
 * output the powers
 * of 2 less than the
 * input.
 */

#include <stdio.h>

int input;
int n = 1;

int main()
{
	printf("Enter a number: ");
	if(scanf("%d", &input) == 0)
		return 0;
	
	while(n * 2 < input)
	{
		n *= 2;
		printf("\n%d", n);
	}
	
	return 0;
}