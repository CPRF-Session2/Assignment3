/*Aldin Aksay*/

#include <stdio.h>
int main (){
float Your_Number;
int count = 2;
printf("Enter a number: ");
scanf("%f", &Your_Number);

while (count < Your_Number) {      /*while loop that lists all the powers of 2 less than Your_Number*/
	printf("%d\n", count);
	count *= 2;
	}

	return 0;
	}


