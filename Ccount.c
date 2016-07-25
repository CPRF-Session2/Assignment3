#include <stdio.h>
int main()
{
	char c[1000];
	printf("Enter any sort of string of characters.\n");
	scanf("%s", c);
	
	char freq = 'c';
	char uppercase = 'C';
	int y; 
	int num=0;

	for(y=0;c[y]!='\0';++y)
	{
		if(freq==c[y] || uppercase==c[y])
			++num;
		
	}
	printf("The letter C (both lowercase and uppercase) shows up in this string %d times.\n",num);
return 0;
}
