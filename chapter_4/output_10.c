/*
 * Name: output_10.c
 * Purpose: soln to exercie question 10
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// a
	int i = 6;
	int j = i += i;
	printf("%d %d \n", i , j); // output 12 12 use associativity for assignment starting from right
	
	// b
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d \n", i , j); // output 3 4  evaluate the brackets first
	
	// c
	i = 7;
	j = 6 + (i = 2.5); // chnages value to 2 upon asssignment as i is int
	printf("%d %d \n", i , j); // output 2 8  evaluate bracke first i.e assignment
	
	// d
	i = 2;
	j = 8;
	j = (i = 6) + (j = 3); // multiple unsequenced modification to j
	printf("%d %d \n", i , j); // output 6 9  evaluate bracke first i.e assignment
	return 0;
}
