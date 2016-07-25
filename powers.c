/*Matthew Kellerman*/
/*Prints powers of 2 that is less than user's input */
#include <stdio.h>
int main()
{
int x;
int y = 1;
/*1 is a power of 2, 2^0*/
do {
printf("\nPlease enter a positive number: ");
if(scanf("%d",&x)==0) {
	printf("Not a positive number\n");
}	while(getchar()!='\n');
}
/*I put while x < 0 because I want the number to be positive.*/
while (x < 0);

while (y < x){
	/*Prints y's value and multiples y it by 2  until y is <= x*/
	printf("%d\n",y);
	y*=2;
}
return 0;
}

