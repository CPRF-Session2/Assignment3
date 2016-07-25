/* Can Parlar - Scans 2 numbers prints out their average wheather they are  prime  or not and wheather they are relativaly prime or not */
#include <stdio.h>

int main () {
	float average;
	int number1, number2;
	int divider;
	printf("Enter a number:");
	scanf("%d", &number1);
	printf("Enter another number:");
	scanf("%d", &number2);
	average = (float) (number1 + number2) / 2;

	for (divider = 2; divider <= number1 - 1; divider++) {
		if (number1 % divider == 0) {
			printf("1st number is not a prime number\n");
			break;
		}

		else { printf("1st number is a prime number\n");
			break;
		}}

	for (divider = 2; divider <= number2 - 1; divider++) {
		 if (number2 % divider == 0) {
		 	printf("2nd number is not a prime number\n");
			break;
		}

		else { printf("2nd number is a prime number\n");
			break;
			
		}}








	printf("%.2f\n", average); 
	return 0;
}
