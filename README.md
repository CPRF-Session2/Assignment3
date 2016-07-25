# Assignment 2

## Objectives

To gain a solid understanding of loops in C. 

### Part 1

1.  Using while loops, write a program `powers.c` that accepts a number as an input and prints all powers of 2 such that 2^n is less than that number.  Handle invalid input accordingly.
2.  Write a program `posnums.c` that reads 2 positive integers from the user, and prints the average of the two (this should be printed as a floating point number.), whether each number is a prime number or not, and whether the two numbers are relatively prime or not (the only positive integer that divides both of them evenly is 1).
3.  Write a program `Ccount.c` that reads in a string of user-input characters and counts the number of times C (either uppercase or lowercase) appears.  For instance, if the input is “sdfxCkkwixcpcwacdjc”, the letter C appears 5 times.

  
### Part 2

1.  Determine the complexity of the following code snippets: 

    a.  
    ``````C
      int sum = 0;
      for(i = 0; i < n; i++)
              sum++;
    ```
    
    b.  
    ``` C
    sum = 0;
    for( i = 0; i < n; i++ )
        sum++;
    for( i = 0; i < n; i++ )
        for( j = 0; j < n; j++ )
            sum++;
    ```
    
    c.  
    ``` C
    for(i=0;i<n;i+=2) {
  	  for(j=1;j<=n;j*=2) {
  		  printf(“%d,%d\n”,i,j);
	    }
    }
    ```

2.  The following code should prompt the user for input. If that input is a number between 1 and 4, inclusive, then it should print the number back just once and prompt the user for another number. Does the following code do so? And if not, what does it do instead and how can you fix this to do the needed task? 
 ```C
 #include <stdio.h>
int main () {
    int n = 1; 
    while (n > 0 && n < 5) { 
	    printf(“%d”, “Enter number:”);
	    scanf(“%d”, &n);
	  	switch (n) {
	  		case (1):
	  			printf(“%d”, n);
	  			break;
	  		case (2):
	  			printf(“%d”, n);
	  			break;
	  		case (3):
	  			printf(“%d”, n);
	  			break;
	  		case(4):
	  			printf(“%d”, n);
	  			break;
	  	}
}
return 0; 
}
 ```

3.  Is the following code snippet valid? If so, what information or assumptions must be given for it to be valid? If not, why not?
    ``` C
    for(;i < 1000;i*=2) {
        printf(“%d\n”);
    }
    ```

### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment3.txt file. Submit by Monday, July 25th at 10am. 
