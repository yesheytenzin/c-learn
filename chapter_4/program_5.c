/*
 * Name: progarm_5.c
 * Purpose: soln to project question 5.
 * Author: YT
 */

/* Rewrite the upc. c program of Section 4.1 so Lbal the user enters 11 digits a1 one time,
instead of entering one digit. then tive digits. and then anal.her five digits.
Enter the first ll digits of a UPC : 01380015173
Check digit: 5 */

#include <stdio.h>
int main(void) {
	// first group digits in the upc code
	int i1,i2,i3,i4,i5;

	// second group digits in the upc code
	int j1,j2,j3,j4,j5;

	// first single digit of upc
	int single;
	printf("enter the upc number: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &single, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

	// main algorithm to calculate check digit
	// sum : add odd digits value
	int first_sum = single + i2 + i4 + j1 + j3 + j5;
	
	// sum: add even digits value
	int second_sum = i1 + i3 + i5 + j2 + j4;

	// total = 3 * first_sum + second first_sum
	int total = (3 * first_sum) + second_sum;
	total = total - 1;
	int remainder = total % 10;
	int final = 9 - remainder;
	printf("check digit: %d\n", final);

	return 0;
}


