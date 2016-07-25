/*Mariposa Lee, checking for c in a user input string. Researched a lot for this one, but still couldn't quite get it to work...*/
#include <stdio.h>
int main () {
	char string[200], c, C;
	int i, time;
	time = 0;
c = 'c';
C = 'C';
printf("Enter some characters.\n");
	scanf("%c", &string);

for (i=0 ; string[i]!='\0'; i++){
	if (c== string[i]){   
		++time;}
	if (C==string[i]){
		++time;}
} /*Every time c or C appears, it should add 1 to time. However, it only reads the first time c or C appears and then breaks the loop, printing "C appears 1 times.") Not sure how to fix.*/
printf("C appears %d times.\n", time);
return 0;
}
