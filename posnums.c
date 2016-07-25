/* This program allows a user to enter two numbers, which will be identifiedas either prime or composite individually and relatively prime as a pair. Also, the averages of these two numbers will be printed and whether it is prime or composite. - Amanda Cuevas */
#include <stdio.h>
#include <math.h>
int main()
{
	float uno;
	float x;
	float num = 0;
		printf("Please enter a positive number.\n");
		scanf("%f",&uno);

/* The above allows the user to enter the first number. */

	for(x=2;x<=uno/2;x++){
		 if((int)uno%(int)x==0){
	         num++;
		 break;	  
		 }
				 
	}
		if(num==0 && uno!= 1)
	           printf("%f is a prime number.\n",uno);
		      else
		            printf("%f is a composite number.\n",uno);

/* The above identifies the first number as prime or composite. */

	float dos;
	float y;
	float ber = 0;
		printf("Please enter a second positive number.\n");
		scanf("%f",&dos);

/* ^^^  Allows the user to enter a second number. */		

	for(y=2;y<=dos/2;y++){
	        if((int)dos%(int)y==0){
	        ber++;
                break;	
		}
				    }
		   if(ber==0 && dos!= 1)
			 printf("%f is a prime number.\n",dos);
		      else
			     printf("%f is a composite number.\n",dos);

/* ^^^ Identifies the second number as either prime or composite. */

	float relative;
	float math;
	for(math=1;math<=uno;math++){
		if( (int) uno % (int) math == 0 && (int) dos % (int) math ==0)
	{
		relative=math;
	}
}
		if(relative==1) {
			printf("The numbers %f and %f are relatively prime.\n",uno,dos);
				}
		else {
			printf("The numbers %f and %f are not relatively prime.\n",uno,dos);
		     }

/* ^^^ Identifies the two numbers as relatively prime or not. */

	float average;
	float z;
	float number = 0;
		average = (uno + dos)/2;
		printf("The average of %f and %f is %f.\n",uno,dos,average);

/* ^^^ Calculates and prints the average of the two user-inputted numbers.*/		

	for(z=2;z<=average/2;z++){
		 if((int)average%(int)z==0){
		 number++;				     
		 break;
		 }
			    }
	   if(number==0 && average!= 1)
		           printf("%f is a prime number.\n",average);
	      else
		            printf("%f is a composite number.\n",average);

/* ^^^ Identifies the average as either prime or composite. */

return 0;
}

