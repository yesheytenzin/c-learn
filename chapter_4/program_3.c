/*
 * Name: progarm_3.c
 * Purpose: soln to project question 3.
 * Author: YT
 */

/* Rewdte the progran1 in Programming Project 2 so that it prints the reversaJ of a three-digit
nun1ber without using arithn1etic to split the number inLo digits. Hint: See the upc. c pro-
gra111 of Section 4.1 */

#include <stdio.h>
int main(void) {

	// use the example of upc.c to reverse the 3 digit number
	int first, second, third;
	printf("enter three digit number: ");
	scanf("%1d%1d%1d", &first, &second, &third);

	printf("reverse number: %1d%1d%1d\n", third, second, first);
	return 0;
}
