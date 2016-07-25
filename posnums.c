i#include <stdio.h>
int main()
{	double x, y, z;
	z=( (x+y)/2);
	printf("Choose a number");
		scanf("%f", x);
		if (x<0){
			printf("Restart the program, you may not choose a negative number");
		}
	printf("Choose another number");
		scanf("%f", y);
		if (y<0){
			printf("Restart the program, you may not choose a negative number");
	printf("This is the average of the two numbers: %5f, z");
		}
	return 0;

}
