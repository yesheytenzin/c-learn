/*
* Name: adding_frac.c
* Purpose: project part 6
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int n1, d1, n2, d2, resn, den;

	// just format strings
	printf("enter two frac seperated by +: ");
	scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

	resn = n1 * d2 + n2 * d1;
	den = d1 * d2;

	printf("result: %d/%d\n", resn, den);
	return 0;

}

