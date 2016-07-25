/*Write a program `Ccount.c` that reads in a string of user-input characters and counts the number of times C (either uppercase or lowercase) appears.  For instance, if the input is “sdfxCkkwixcpcwacdjc”, the letter C appears 5 times.*/

#include <stdio.h>

int main() {
	char current;
	int count;
	count=0;
	printf("Please mash keyboard with face: ");
	do {
		current = getchar();
		if (current=='c') {
			count++;
		}
	}
	while (current!='\n');
	printf("%d\n", count);
	return 0;
}
	
