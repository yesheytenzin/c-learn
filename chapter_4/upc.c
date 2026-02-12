/*
 * Name : upc.c
 * Purpose: Compute the check digit of universal product code
 * Author: YT
 */

#include <stdio.h>
int main(void){
	// first group digits in the upc code
	int i1,i2,i3,i4,i5;

	// second group digits in the upc code
	int j1,j2,j3,j4,j5;

	// first single digit of upc
	int single;
	printf("enter the single digit: ");
	scanf("%1d", &single);

	printf("enter the first group: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

	printf("enter the second group: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

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
