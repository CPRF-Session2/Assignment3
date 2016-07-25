/*Write a program Ccount.c that reads in a string of user-input characters and counts the number of times C (either uppercase or lowercase) appears. For instance, if the input is “sdfxCkkwixcpcwacdjc”, the letter C appears 5 times. */
#include <stdio.h>
int main() {
	int num=0;
	int i;
	printf("Enter a string:\n");
	char word;
	for(i=0;i<1;i++)
	{	
		scanf("%c", &word);
	}
	for (i=0;i<1;i++)
		printf("%c\n", word);
	for(i=0;i<1;i++)
	{
	switch (word) {
		case ('c'):
		case('C'):
			num++;
			continue;
		default:
			continue;
	}
	/*	while (1)
	{
		if (string== 'C'||'c')
			num++;
	}
	printf("%c has %d C's", string,num);
*/	
	return 0;
	}
	}
