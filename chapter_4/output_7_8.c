/*
 * Name: output_7_8.c
 * Purpose: soln to exercie question 7
 * Author: YT
 */

/* The algorithn, for con1puting the U PC check digit ends with lhe following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divide-el by 10.
Subtract the remainder from 9.
lt's te1npting to try to simplify the algorithm by using these steps instead:
Coinpute the renJainder when the cotaJ is divided by 10.
Subo·act the ren1ainder from 10.
Why doesn't this technique work? */

// this algo does not work because if incase the total is a multiple of 10 then the remainder we get is 0 and subract from 10 gives back 10,
// and check digit cannot be 10 it needs to be in the range of 0 to 9. the adj = total - 1 is done inorder to remove the total from being a multiple of 10.// the simplifies can produce the same result but fails when the total is a multiple of 10. in which 10-remainder i.e zero gives 10 which is not a check digit. in case of standard upc and first soluton if the result is a multiple of 10 --> 10%10 gives 0 --> and 0 is taken as a valid check digit

// Would the upc. c progra1n still work if rhe expression 9 - ( (total - 1) % 1 O) were
// replaced by (10 - (total% 10)) %10?
/* the program would work until we ger total a multiple of 10 */

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
	// total = total - 1;
	int remainder = total % 10;
	// int final = 9 - remainder;
	int final = 10 - remainder;
	printf("check digit: %d\n", final);

	// eg: 000000000000  for testing
	/* 11:23:55 tenz@yeshey chapter_4 ±|main ✗|→ ./a.out
	enter the single digit: 0
	enter the first group: 00000
	enter the second group: 00000
	check digit: 10
	11:24:00 tenz@yeshey chapter_4 ±|main ✗|→

	the check digit can never be 10, need to take care of edge cases whenever you are programming
	*/
	return 0;
}
