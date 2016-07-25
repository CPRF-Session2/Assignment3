#include <stdio.h> /* Armstrong Park, this program asks the user for a number and prints all powers of 2 that are less than that number */
int main()
{	int x;
	printf("Choose a number");
	if (scanf("%d", &x)==0){
		printf("Not a number, run the program again\n");
		while (getchar()!='\n');
	   }
	

	printf("%d\n", x);
	int z;
	z=1;
	while (z<x) {
		printf("%d\n", z);
		z=z*2;
	}
	return 0;
}

	
