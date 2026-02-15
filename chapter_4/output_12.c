/*
 * Name: output_12.c
 * Purpose: soln to exercie question 12
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// a
	int i = 5;
	int j = ++i * 3 - 2;
	printf("%d %d\n", i , j); // i = 6 , j = (6 * 3)-2 = 16 precedence of increment, then mul then arthi
	
	// b
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i ,j); // i = 6 value after incrementation; j = 3 - (2 * 5) = -7 , use precedence 
	
	// c
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j); // i = 6 after decrement, j=(3 * 7)+2= 23
	
	// d
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i ,j); // i = 6 decremented, j=3+(6*2) = 15 -- to understand more read on precedence and associativity
	return 0;
}
