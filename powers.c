/*Rebecca Hale, Assignment 2 Part 1*/
#include <stdio.h>
#include <math.h>

int main(){
	int num;
	do{ /*Checks for invalid input*/
		printf("Enter a number: ");
		scanf("%d", &num);
	}while(getchar()!='\n')/*clears out input*/;
	
	int c = 0;
	while(pow(2,c)<num){/*increments by 1, powers of 2*/
		printf("%f\n",pow(2,c));
		c++;
	}
	
	return 0;
}
