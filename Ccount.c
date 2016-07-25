#include <stdio.h>
int main()
{
int number_times_c_entered = 0;
char input;

printf("Enter something: ");

/*I need a do while loop because if I used a while loop and the user didn't input anything, the code wouldn't run.*/

do
{
	input = getchar();
	/*Gets the char the user enters.*/
	if(input == 'c' || input == 'C')
		/*If its c or C, the variable increase by one.*/
			{
			number_times_c_entered ++;
			}
}
	while(input !='\n');
/*Does loop as long as their is an input in the buffer*/
printf("The letter C was inputed %d times.\n",number_times_c_entered );
	return 0;
}
