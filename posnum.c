/* Jinoo Hong */
/* Write a program `posnums.c` that reads 2 positive integers from the user, and prints the average of the two (this should be printed as a floating point number.), whether each number is a prime number or not, and whether the two numbers are relatively prime or not (the only positive integer that divides both of them evenly is 1). */

#include <stdio.h>
#include <math.h>

int main() {
	/*double used instead of float for "sqrt" function*/
	double num1, num2;
	int input1 = 0;
	int input2 = 0;
	char character;
	int bool1;
	/*I feel like if I knew how to create functions, this entire do... while loop would be much less tedious to type up*/
	do {
		/*failed efforts to try to fix problem of how inputs with BOTH letter AND number doesn't work properly*/
		printf("Please input a positive integer: ");
		/*scanf("%lf", &num1);
		character1=getchar();
		if (bool1==0) {
			while character1 != '\n';
				if character1 == 
			character1=getchar()*/ 
		/*does not work for inputs that have BOTH letter AND number. e.g. 1ewwQ because " if((scanf("%lf", &num1)==1)&&(num1>0)) " only checks the first character */
		if ((scanf("%lf", &num1)==1)&&(num1>0)) { 
			input1 = 1;
		}
		else { 
			printf("Invalid input!\n");
			int y;
			do {
				y = getchar();
			}
			while (y!='\n');
		}
	}
	while (input1 != 1);
	do {
		printf("Please input another positive integer: ");
		if ((scanf("%lf", &num2)==1)&&(num2>0)) {
			input2 = 1;
		}
		else {
			printf("Invalid input!\n");
			int x;
			do {
				x = getchar();
			}
			while(x!='\n');
		}
	}
	while (input2 != 1);
	/*average*/
	double average;
	average = (num1+num2)/2;
	printf("Your average is %f\n", average);
	
	/*find if num1 is prime*/
	/*would help if I used a function too because then I don't need to type it up twice*/
	/*double num1sqrt;
	num1sqrt = sqrt(num1);*/
	/*could be more efficient with square root but it doesn't work for some reason. even after including math.h library*/
	int num1prime, prime1;
	prime1=1;
	for (num1prime=2; num1prime<num1; num1prime+=1) {
		if ((int)num1%(int)num1prime == 0) {
			printf("%f, your first number, is not prime\n", num1);
			prime1=0;
			break;
		}
	}
	if (prime1==1) {
		printf("%f, your first number, is prime\n", num1);
	}
	
	/*find if num2 is prime*/
	int num2prime, prime2;
	prime2=1;
	for (num2prime=2; num2prime<num2; num2prime+=1) {
		if ((int)num2%(int)num2prime==0) {
			printf("%f, your second number, is not prime\n", num2);
			prime2=0;
			break;
		}
	}
	if (prime2==1) {
		printf("%f, your second number, is prime\n", num2);
	}
	
	/*check if they are relatively prime*/
	
	return 0;
}
