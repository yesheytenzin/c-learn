/*
 * Name: output_3_4.c
 * Purpose: soln to exercie question 3
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// a
	printf("%d\n", 8/5); // output 1 or 2
	
	// b
	printf("%d\n", -8/5); // output -1 or -2
	
	// c
	printf("%d\n", 8/-5); // output -1 or -2
	
	// d
	printf("%d\n", -8/-5); // output 1 or 2
	
	// above is for c89
	// as for c99 the value will be close to 0 hence 1 or -1
	// note: compiler in division tries to make the value towards zero
	
	return 0;
}
