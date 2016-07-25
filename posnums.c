/* Mariposa Lee, identifying prime numbers from user input*/
#include <stdio.h>
#include <math.h>
float main ()
{
	float num1, num2, average, x;
	printf("Please type 2 positive integers.\n");
	scanf("%f %f", &num1, &num2);
average = ((num1 + num2)/2);
printf("The average of the two integers is %f.\n", average);

for (x=2; x<=num1/2; ++x){ /*Divides the user inputs to see if there is a remainder*/  
	if (fmod(num1, x)!=0){  /*using fmod for float. fmod returns the remainder when there is an x and y*/
		printf("Your first number is a prime.\n");
	if (fmod(num2, x)!=0){
		printf("Your second number is also a prime.\n");}
	else {
		printf("Your second number is not a prime.\n");}
	}
	else if (fmod(num2, x)!=0){
		printf("Your second number is a prime.\n");} /* when the first number is not a prime.*/

/*If none of the numbers are prime, nothing is printed.*/

	/* Couldn't figure out how to do the relatively prime code... I understand both numbers' hcf has to be 1 in order for them to be relatively prime, but I don't understand how I could possibly put that in code. I apologize! */
return 0;
}}












