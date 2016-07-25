/*Rebecca Hale, Assignment 2 Part 1*/
#include <stdio.h>

int main(){
	int one;
	int two;
	printf("Enter the first integer: ")/*gets first int*/;
	scanf("%d", &one);
	printf("\nEnter the second integer: ");/*gets second int*/
	scanf("%d", &two);
	float average = one + two;
	average = average/2;/*calculates average*/
	printf("\nThe average of the numbers is %f", average);/*average*/
	
	int t = 1;
	int c = 2;
	while(t==1 && c<one){/*checks to see if one is prime*/
		if(one%c==0)
			t=0;
		c++;
	}
	int t2=1;
	int c2=2;
	while(t2==1 && c2<two){/*checks to see if two is prime*/
		if(two%c2==0)
			t2=0;
		c2++;
	}
	if(t==1)
		printf("\nThe first number is prime");
	else 
		printf("\nThe first number is not prime");
	if(t2==1)
		printf("\nThe second number is prime");
	else 
		printf("\nThe second number is not prime");
	/*prime*/

	int count = 2;
	int true = 1;
	while(count<=one && count<=two){
		if(one%count==0 && two%count==0)/*checks if count evenly divides into both ints*/
			true = 0;
		count++;
	}
	if(true==0)
		printf("\nThe numbers are not relatively prime\n");
	else printf("\nThe numbers are relatively prime\n");
	/*relatively prime*/



	return 0;
}
