/* Albert Zhang
   Prints powers of 2 up to the user's input */
#include <stdio.h>
#include <math.h>
int main () {
	float redo, n, print;
	n=0;
	print=0;
	redo=0;
	do {
		printf("Input your number: ");
		scanf("%f", &n);
		if  (getchar() != '\n') {
			printf("That was not a valid number. Try again. \n");
			redo = 1;
			continue;
		}
		while (n > 0) {
			print = ("%f", pow(2, n));
			printf("%f \n", print);
			n--;
		}
		redo = 0;
	}
	while (redo == 1);
	return 0;
}

