#include <stdio.h>
int main(){

	char string [100], ch;
	int let=0, x;

	printf("Enter random charecters ");
	scanf("%s", string);

	for(x=0; x<=100;x++)
	{
		ch=string[x];

		if (ch == 'C' || ch=='c')
			let++;
	}
	printf("C appears %d times in this string\n", let);

	return 0;
}
