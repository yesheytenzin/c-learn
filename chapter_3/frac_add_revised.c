// Sbo,v bow to modify tbe addf:rac. c program of Section 3.2 so that the user is allowed to
// enter fractions that contain spaces before and af1e.- each / character.
/*
* Name: frac_add_revised.c
* Purpose: add two fractions
* Author: YT
*/


// just add space after and before /
#include <stdio.h>
int main(void) {
	int n1, d1, n2, d2, resn, den;
	printf("enter first frac: ");
	scanf("%d / %d", &n1, &d1);

	printf("enter second frac: ");
	scanf("%d / %d", &n2, &d2);

	resn = n1 * d2 + n2 * d1;
	den = d1 * d2;

	printf("result: %d / %d\n", resn, den);
	return 0;

}

