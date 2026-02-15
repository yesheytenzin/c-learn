/*
 * Name: progarm_2.c
 * Purpose: soln to project question 2.
 * Author: YT
 */

/* Extend the program in Programming Project I to handle rhree-digit numbers */

#include <stdio.h>
int main(void) {
	int n;
	printf("enter 3 digit number: ");
	scanf("%3d", &n);

	printf("%1d\n", n%10);

	int temp = n/10; // return last 2 digits from 3 digit and use the same logic as the one done for 2 digit
	printf("%1d\n", temp%10);
	printf("%1d\n", temp/10);

	printf("reverse number: %1d%1d%1d\n", n%10, temp%10, temp/10);
	return 0;
}
