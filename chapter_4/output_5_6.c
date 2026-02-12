/*
 * Name: output_5_6.c
 * Purpose: soln to exercie question 4
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// a
	printf("%d\n", 8%5); // output 3
	
	// b
	printf("%d\n", -8%5); // output -3 or 2 --> c89 simillar to mathematics will have 2 values for each modulo
	
	// c
	printf("%d\n", 8%-5); // output 3 or -2 
	
	// d
	printf("%d\n", -8%-5); // output -3 or 2
	
	// above is for c89 truncate towards 0 or negative infinity.
	// as for c99 the value will be close to 0 hence 3 -3 3 -3 respectively
	// note: compiler in division tries to make the value towards zero
	
	return 0;
}
