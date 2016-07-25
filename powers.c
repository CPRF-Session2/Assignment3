/*Mariposa Lee, printing out powers of two less than user input*/
#include <stdio.h>
#include <math.h>
int main ()

{ 
	int num, power, in;
printf("Please enter a number.\n");
power = (1);
in = (scanf("%d", &num));


do {
		if (in == 0) {
			printf("Please enter a valid number.\n");
			while (getchar()!='n'); /*error: somehow after it prints "Please enter a vlid number.", the code accepts user inputs over and over again. I couldn't figure out how to fix this.*/
			continue; 
			}
		else {break;} }
		while (in==0);


			while (power < num) {
			printf("%d\n", power); 
			(power *= 2);}/*should have used pow(n, 2) but I found this way easier to do...*/
			
return 0;

}

