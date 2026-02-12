/*
 * Name : output_1.c
 * Purpose: solution to exercise question 1
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// a
	int i = 5;
	int j = 3;
	printf("%d %d\n", i/j, i%j);
	/* output 1 as in division the value is always towards 0*/

	// b
	int k = 2;
	int l = 3;
	printf("%d\n", (k+10) % l);
	/* output O as there is no remainder. */

	// c
	int m = 7;
	int n = 8;
	int o = 9;
	printf("%d\n", (m+10) % n/o);
	/* output O if compiler take floor value and 1 for ciel value */
	/* first m+10 is compputed then modulus --> the result is / o value. taking into consideration associativity... the final output is 0*/

	// in c mostly as we have studied earlier, the value of divison is always towars 0
	return 0;
}
