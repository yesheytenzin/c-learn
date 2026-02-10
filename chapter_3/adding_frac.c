/*
* Name: adding_frac.c
* Purpose: add two fractions
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int n1, d1, n2, d2, resn, den;
	printf("enter first frac: ");
	scanf("%d/%d", &n1, &d1);

	printf("enter second frac: ");
	scanf("%d/%d", &n2, &d2);

	resn = n1 * d2 + n2 * d1;
	den = d1 * d2;

	printf("result: %d/%d\n", resn, den);
	return 0;

}

