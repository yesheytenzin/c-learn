/*
 * Name: increment.c
 * Purpose: explain how increment/decrement work in basis of postfix and prefix
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	int i = 1;
	int j = 2;
	
	int k;
	k = ++i + j++;
	printf("i = %d j = %d k = %d\n", i , j, k);
	// i value is preincrement so 2
	// j value is 2 but increment later to 3
	// k value is 4 which is 2 + 2 before j is increment
	
	// exmaple
	// i = 1
	// j = 2
	// k = i++ + j++; then i is 2, j is 3 and sum is 3 --> sum is 3 as the value is computed before increment happens
	return 0;
}
