/*
* Name: telephone.c
* Purpose: solve project question 4.
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int t1, t2, t3;
	printf("enter telephone (xxx) xxx-xxxx : ");
	scanf("(%3d) %3d-%4d", &t1, &t2, &t3);
	printf("%3d.%3d.%4d\n", t1, t2, t3);
	return 0;
}

// output
// enter telephone (xxx) xxx-xxxx : (404) 123-4567
// 404.123.4567
