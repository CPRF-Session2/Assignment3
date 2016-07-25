/* This program accepts a user inputted number and prints all powers of 2 so that 2^n is less than that number. - Amanda Cuevas */
#include <stdio.h>
#include <math.h>
int main() 
{
	float exp;
	float a;
	float retry;
	do {
	printf("Please enter a number.\n");
	scanf("%f",&exp);
	if (getchar()!='\n') {
			printf("That was not a number. Please input a valid number.\n");
			retry=1;
			continue;
			}
		while(exp>0) {
			a = ("%f",pow(2,exp));
			printf("%f\n",a);
			exp--;
		}
		retry=0;
}
	while(retry==1);
return 0;
}
