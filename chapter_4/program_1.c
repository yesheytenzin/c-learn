/*
 * Name: progarm_1.c
 * Purpose: soln to project question 1. ask user a 2 digit num and reverse it
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	int num;
	printf("enter 2 digit number: ");
	// limit number entered to 2 decimal place
	scanf("%2d", &num);
	
	// if n is the number than n%10 is the last digit in n eg 12 -> 2
	printf("%1d\n", num%10);

	// n/10 is n with last digit removed eg: 12 last digit removed is 1
	printf("%1d\n", num/10);

	printf("reverse number: %d%d\n", num%10, num/10);
	return 0;
}

