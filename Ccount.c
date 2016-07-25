/* Jared Wasserman -- Ccount.c */
/*This program takes a string of user-input and counts the number of times C or c appears.*/
#include <stdio.h>

int main(){

	int count = 0;
	char character;

	printf("Enter a bunch of characters: ");

	while(character!='\n'){
		character = getchar();
		if(character=='C'||character=='c'){
			count++;
		}
	}

	printf("The letter c was in your input %d times\n",count);

return 0;
}
