/*
 * Name: output_14.c
 * Purpose: soln to exercie question 14
 * Author: YT
 */

 /* Give the values of i and j after each of lhe following expression statemeats bas been exe-
cuted. (Assume thaL i bas the value l initially and j has the value 2. */

#include <stdio.h>
int main(void) {
	int i = 1;
	int j = 2;

	// NOTE: assumming the value of i and j remains same
	
	// a
	i += j; // i = i + j
	printf("%d %d\n", i, j);// i=3 and j=2
	
	// b
	i = 1; 
	j = 2;
	printf("%d\n", i--); // i=1 and then it gets decremented, but discared later as it is not used, j remain same 2
	
	// c
	i = 1;
	j = 2;
	printf("%d\n", i * j / i); // follow left associativity then (i * j)/ i = (1 *2)/1 = 2 
	
	// d
	i = 1;
	j = 2;
	printf("%d\n", i % ++j); // increment predecent and then multiplicative --> i=1 and j=3, as for expression output --> 1%3=1
	// 1 modulus 3 = 1 --> learn math modulus concept
	return 0;
}
