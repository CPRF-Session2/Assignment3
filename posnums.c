#include <stdio.h>
/* Asks for two positive integers, gives the everage of the two, states if they are prime, and if they are relatively prime.*/
int main() {
	int num1, num2;
	double average;
	int x=0;
	while (x==0){
		printf("Enter a number :");
		scanf("%d",&num1);
		printf("\nEnter a number :");
		scanf("%d",&num2);
		if (num1<=0 || num2<=0){
			printf("You can input positive integers.\n");
			continue;
		}
		else {
			x=1;
		}}
	
	average=((double)(num1+num2))/2;
	printf("The average is %0.1f\n",average);
	
	int true=1;
	int a,b,c,d;
	for(a=2;a<(num1/2);a++)
		if (num1%a==0) {
			true=0;}
	if (true==1) {
		printf("%d is a prime number\n",num1);}
	else {
		printf("%d is not a prime number\n",num1);}
	
	true=1;
	for(b=2;b<(num2/2);b++)
		if (num2%b==0) {
			true=0;  }
	if (true==1) {
		printf("%d is a prime number\n", num2);}
	else {
		printf("%d is not a prime number\n", num2);}

	if (num1<num2) {
		for(c=2;c<=num1;c++){
			if (num1%c==0 && num2%c==0){
				printf("%d and %d are not relatively prime\n", num1, num2);
				break;
			}
			else {
				printf("%d and %d are relatively prime\n", num1, num2);
				break;
			}}}
	if (num2<num1) {
		for(d=2;d<=num2;d++){
			if (num2%d==0 && num1%d==0){
				printf("%d and %d are not relatively prime\n",num2, num1);
				break;
			}
			else {
				printf("%d and %d are relatively prime\n",num2,num1);
				break;
			}}}

return 0;
}
			
	
		
