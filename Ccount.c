/*Rebecca Hale, Assignment 2 Part 1*/
#include <stdio.h>

int main(){
	int i;
	char c;
	int count=0;
	for(i=0; i<100; i++){
		scanf("%c", &c);
		if(c=='C'){
			count++;
		}
		if(c=='c'){
			count++;
		}
	}
	printf("\nThere are %d c's.", count);
	return 0;
}
