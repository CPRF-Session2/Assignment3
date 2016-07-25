#include <stdio.h> 
int main(){
char string [500], ch;
int x, count = 0;

printf("Enter a string of input characters: ");
scanf("%s", string);

for(x = 0; x <= 500; x++) {			/*for loop to test each character in the string*/
	ch = string[x];
        if (ch == 'C' || ch == 'c')
		count++;
	}
printf("The letter C appears %d times\n", count); 
return 0;
}


