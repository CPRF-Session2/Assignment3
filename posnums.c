/* Albert Zhang
   Averages two numbers, then checks if they're prime and relatively prime */
#include <stdio.h>
int main () {
	float div, intone, inttwo, avg, redo;
	intone = 0;
	inttwo = 0;
	avg = 0;
	redo = 0;
	do {
		printf("Input first number: ");
		scanf("%f", &intone);
		if (getchar() != '\n') {
			printf("That was not a valid input. Try again. \n");
			redo = 1;
			continue;
		}
		printf("Input second number: ");
		scanf("%f", &inttwo);
		if (getchar() != '\n') {
			printf("That was not a valid input. Try again. \n");
			redo = 1;
			continue;
		}
		avg = (intone + inttwo)/2;
		printf("The average of those numbers is:  %f \n", avg);
		redo = 0;
	}
	while (redo == 1);
	for (div = 2; div <= (intone/2); div++) {
		if ((int) intone % (int) div == 0) {
			printf("Your first number is not prime. \n");
			break;
		}
		if (div == (int) intone/2) {
			printf("Your first number is prime. \n");
			break;
		}
	}
	if (intone <= 3 && intone >= 0) {
		printf("Your first number is prime. \n");
	}
	for (div = 2; div <= (inttwo/2); div++)
		 {
                 if ((int) inttwo % (int) div == 0) {
                        printf("Your second number is not prime. \n");
			break;
                 }
                 if (div == (int) inttwo/2) {
			 printf("Your second number is prime. \n");
                         break;
                 }
        }
	if (inttwo <= 3 && inttwo >= 0) {
		printf("Your second number is prime. \n");
	}
	float prime;
	for (div = 1; div <= intone && div <= inttwo; div++) {
		if ((int) intone % (int) div == 0 && (int)  inttwo % (int) div == 0)
		{
			prime = div;
		}
	}
	if (prime == 1) {
		printf("Your numbers are relatively prime. \n");
	}
	return 0;
}


