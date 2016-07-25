/*Counts the number of C's there are in a user's input*/
#include <stdio.h>

int main() {
	int c=0;
	char letters;
	printf("Enter some random letters :");
	do {
	letters=getchar();
		if(letters=='c'|| letters=='C'){
			c++;}
	}
	while (letters!='\n');
	
	printf("There are %d c's!\n",c);
	return 0;
}
