/* Drew French */

/* Reads a string of characters
 * and counts the amount of times
 * C or c appears.
 */

#include <stdio.h>

int i;
int c;

int main()
{
	char s[64];
	
	scanf("%[^\n]s", s);
	printf("%s\n", s);
	
	for(i = 0; i < 64; i++)
	{
		if(s[i] == 'c' || s[i] == 'C')
		{
			c++;
		}
	}
	
	printf("There are %d C's.\n", c);
	
	return 0;
}