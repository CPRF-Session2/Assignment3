#include <stdio.h> /* Asks the user for a number, and then prints all the powers of 2 which are smaller than the number*/
#include <math.h>
int main() {
	int x=0;
	int num;
	while (x!=1){
		printf("Enter your number :\n");
		if (scanf("%d",&num)!=0){
			x=1;}
		else {
			printf("Not a number!\n");}
	}
	int i;
	int powers=1;
	for (i=1;i<num;powers++)
		i=(2,powers);
		printf("%d\n",i); 
	return 0;
}	
