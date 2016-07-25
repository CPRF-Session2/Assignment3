/* Jinoo Hong */
/* Using while loops, write a program `powers.c` that accepts a number as an input and prints all powers of 2 such that 2^n is less than that number.  Handle invalid input accordingly. */

#include <stdio.h>

int main() {
	int input, number;
	input = 0;
	
	do {
		printf("Please enter a number: ");
		input = 0;
		if ((scanf("%d", &number)==1)&&(number>0)) {
			input = 1;
		}
		else {
			printf("Invalid input!\n");
			int y;
			do {
				y = getchar();
			}
			while (y !='\n'); /*why is it an apostrophe and not quotationmarks around the \n */
		}
	}
	while (input==0);

	int currentnum;
	currentnum = 1;
	while (currentnum < number) {
		printf("%d\n", currentnum);
		currentnum = currentnum*2;
	}
	return 0;
}
