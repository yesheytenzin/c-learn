/*
 * Name : output_2.c
 * Purpose: solution to exercise question 2
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	// if i and j are always positive
	int i = 4;
	int j = 4;
	printf("%d\n", (-i)/j);
	/* in above case the value is negavtive or zero in certain cases example 3/4 --> 0*/
	printf("%d\n", -(i/j));
	/* in this case the output is always - if i and j are always positive */
	return 0;
}

