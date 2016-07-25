/* Can Parlar - Counts the letter "C" in the input */

#include <stdio.h>

int main() {
	int number = 0;
	char letter;
	printf("Enter random letters:\n");

	do  {
	letter = getchar();
		if (letter == 'C' || letter == 'c') {
		number++;
		}
	}
	while (letter != '\n');
	printf("Number of C's:%d\n", number);
	return 0;
}

