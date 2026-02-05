/*
 * Name: polynomial.c
 * Purpose: compute polynomial value given x
 * Author: YT
*/

#include <stdio.h>

int main(void)
{
	int x, answer;
	printf("enter value of x: ");
	scanf("%d", &x);

	int first = 3 * (x * x * x * x * x);
	int second = 2 * (x * x * x * x);
	int third = 5 * (x * x * x);
	int fourth = x * x;
	int fifth = 7 * x;
	int sixth = 6;

	answer = first + second - third - fourth + fifth - sixth;
	int answer2 = (((((3*x + 2) * x-5) * x-1) * x+7) * x-6); /* uses Horner's Rule*/
	printf("answer: %d\n", answer);
	printf("answer 2:  %d\n", answer2);
	return 0;
}

