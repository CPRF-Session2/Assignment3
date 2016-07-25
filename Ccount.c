/*Write a program Ccount.c that reads in a string of user-input characters and counts the number of times C (either uppercase or lowercase) appears. For instance, if the input is “sdfxCkkwixcpcwacdjc”, the letter C appears 5 times. */
#include <stdio.h>
int main() {
	printf("Enter a string:\n");
	char word;
	int counter= 0;
	do {
		scanf("%c",&word);
		if (word=='c'||word=='C')
		{		counter++;}
	} while (word!='\n');
	printf("Your string has %d \"c\"\'s\n", counter);
	return 0;
	}
