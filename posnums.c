/* Jared Wasserman -- posnums.c */
/*This program takes two numbers from the users and prints the average, weather each number is prime, and wheteher the two numbers are relatively prime.*/
#include <stdio.h>

int main(){
	int a;
	int b;
	int bothPrime=0;
	int returnValue;
		
	do{
		printf("Please enter two positive integers seperated by a space: ");
		returnValue = scanf("%d %d",&a,&b);
		if(returnValue==0){
			printf("Invalid input\n");
			while(getchar()!='\n');
		}
		if(a<1||b<1){
			printf("Positive numbers only\n");
			while(getchar()!='\n');
			returnValue=0;
		}
	}while(returnValue==0);


	printf("The average of %d and %d is %f\n",a,b,(float)(a+b)/2);
	
	int x=2;
	if(a!=2){
		while(x<a){
			if(a%x==0){
				printf("%d is not prime\n",a);
				break;
			}else if(x+1==a){
				printf("%d is prime\n",a);
				bothPrime++;
			}	
			x++;
		}
	}else{
		printf("2 is prime\n");
		bothPrime++;
	}
	
	 x=2;
	if(b!=2){
		while(x<b){
			if(b%x==0){
				printf("%d is not prime\n",b);
				break;
			}else if(x+1==b){
				printf("%d is prime\n",b);
				bothPrime++;
			}	
			x++;
		}
	}else{
		printf("2 is prime\n");
		bothPrime++;
	}
	
	if(bothPrime==2){
		printf("%d and %d are relatively prime\n",a,b);
	}else{
		printf("%d and %d are not relatively prime\n",a,b);
	}

return 0;
}
