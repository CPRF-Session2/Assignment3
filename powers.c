/*Can Parlar - Scans a number and prints out the powers of 2 that is lower  than the number. */

#include <stdio.h>
#include <math.h>

int main() {
	int UserI;
	int Number = 0;
	int print = 0;
	printf("Enter a number:");
	while(scanf("%d", &UserI) == 0){
	if (scanf("%d", &UserI) == 0) {
	printf("Not a number\nEnter a number:");
	while(getchar() != '\n'); 
	}
	else {
		break;
	}}

	
	while (print < UserI) {
	print = pow(2, Number);

	if (print < UserI) {
		printf("%d\n",print);
	}
	Number++;
	}

	return 0;
}
