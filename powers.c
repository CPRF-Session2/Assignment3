/* Jared Wasserman -- powers.c */
/*This program accepts a user input of a number a returns all powers of 2 such that 2^n is less than that number.*/
#include <stdio.h>
#include <math.h>

int main(){
	
    float  userInput;
    int returnValue;

    do{
    	printf("Please enter a number: ");
    	returnValue = scanf("%f",&userInput);
	if(returnValue==0){
		printf("Invalid input\n");
		while(getchar()!='\n');
	}
    }while(returnValue==0);
	
    int n=1;
    while(pow(2,n)<userInput){
    	printf("%.0f\n",pow(2,n));
	n++;
    }

return 0;
}
