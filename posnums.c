/*Matthew Kellerman*/
/*Prints average, if prime, and if relative prime*/
#include <stdio.h>
int main()
{
int x;
int y;
int i = 2;
int remainder = 2;
int counter = 0;
int counter_y= 0;
int rp = 1;
int rp_counter = 1;

printf("Please enter two numbers that are greather than one.\n");
/*One and zero are neither prime nor composite. I also don't want negatives.*/
scanf("%d",&x);
scanf("%d",&y);

float average = (x + y)/2;
if (x >= 2 && y >=2){
/*The if statments make sure that the number the user enters is greather 
  than 1.*/
printf("The average is %.2f\n", average);
while (i<x)
	if (x%i ==0){
counter = 1;
i++;
	}
	else{
	i++;
	}
/*The while loop keeps dividing the user's input with the variable 'i'that 
 is set to 2. It divides the input by two and sees if it gets a remainder. 
 If there isn't a remainder, the variable counter is set to 1 and i is 
 increased by 1. If there is a remainder, counter is still zero and i is 
 increased by 1. This will continue to happen until i is equal to the user's input. The reason why i is set to 2 is because any number, prime or not, 
 can be divided by 0 and 1, and not get a remainder. If the user's input is two, this code doesn't run, and counter is still 0.*/
if (counter == 0){
printf("%d is a prime number.\n",x);
}
else
{
printf("%d is not a prime number\n",x);
}
i = 2;
/*Same thing as above, except it's for y, and not x.*/
while (i<y)
	if (y%i ==0){
	counter_y = 1;
	i++;
}
	else{ 
	i++;
}
	if (counter_y == 0){
	printf("%d is a prime number.\n",y);
	
}
	else
{
	printf("%d is not a prime number\n",y);
}

/*The for loop divides x and y by the same number to see if there have a 
 common factor. If there isn't a remainder when both of the variables are 
 divided, then they aren't relative prime numbers. It keeps doing this until the number is greater than both of them.*/
	for(rp =2; rp<= x || rp<= y;rp++){
		int primex = x/rp;
		int primey= y/rp;
	if(x%rp==0 && y%rp==0){
		printf("The numbers you entered aren't relative prime numbers.\n");
		rp_counter = 20;
		/*If this code runs and this variable is set to 20, this 
		 will print out and not the code below it. */
		
	}
	}
	if (rp_counter != 20){
	 printf("The numbers you entered are relative prime numbers.\n");
	}

	

	
        	
		
	
}	else

{
	printf("Sorry, the numbers you entered weren't all greather than one.\n");
}

return 0;
}
