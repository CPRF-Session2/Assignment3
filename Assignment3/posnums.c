#include <stdio.h>
int main() {
float average_2, average_1;
int testnums, testnums_2, num1, num2, x, gcf, counter;
printf("Enter your first number: ");
scanf("%d", &num1);
printf("Enter your second number: ");
scanf("%d", &num2);
average_1 = num1 + num2;		/*to find the average*/
average_2 = average_1 / 2;
printf("Average: %f\n", average_2);

for (testnums = 2; testnums <= num1 - 1; testnums++)	/*to see if the first number is prime */
	{
	if (num1 % testnums == 0){		/*tests to see if each number less than the num1 can be divided into num1. This will help dete							rmine if the number has any integers*/		
		printf("Your first number is not prime\n");
		break;
		}
	counter++;
	}
if (counter == num1 - 2){
		printf("Your first number is prime\n");
			}
if (num1 == 2)
		printf("Your first number is prime\n");

counter = 0;
for (testnums_2 = 2; testnums_2 <= num2 - 1; testnums_2++)		/*same process to check if the second number is prime*/
	{
	if (num2 % testnums_2 == 0){
		printf("Your second number is not prime\n");
		break;
		}
		counter++;
		}
if (counter == num2 - 2) {
		printf("Your second number is prime\n");
			}	
if (num2 == 2)
		printf("Your second number is prime\n");
for (x = 1; x <= num1 && x <= num2; x++)		/*for loop to list all of the common factors*/
{
	if (num1 % x == 0 && num2 % x == 0)
		gcf = x;
		}

if (gcf == 1){
	printf ("Your numbers are relatively prime\n");
	}
	
else {
	printf ("Your numbers are not relatively prime\n");
	}



    return 0;
}


