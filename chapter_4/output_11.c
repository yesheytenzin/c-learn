/*
 * Name: output_11.c
 * Purpose: soln to exercie question 11
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	int i = 1;
	// a
	printf("%d\n", i++ - 1); // based on precedence we evaluate increment first --> output is 0 as 1 - 1 and then increment
	printf("%d\n", i); // output --> 2 - incremented value
	
	// b
	i = 10;
	int j = 5;
	printf("%d\n", i++ - ++j); // based on precedence post before pre increment or decrement output --> 10 - 6 = 4
	printf("%d %d\n", i, j); // i = 11 and j = 6, soln as a result of pre anf post fix increment.
	
	// c
	i = 7;
	j = 8;
	printf("%d\n", i++ - --j); 	// 7 - 7(prefix decrement) = 0 
	printf("%d %d\n", i, j); // i = 8 and j = 7 following precedence of post over prefix 
	
	// d
	i = 3;
	j = 4;
	int k = 5;
	printf("%d\n", i++ - j++ + --k); // 3 - 4 + 4 = 3 precedence of post over prefix increment and decrement 
	printf("%d %d %d\n", i , j ,k); // i = 4, j = 5, k = 4
	return 0;
}

