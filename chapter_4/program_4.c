/*
 * Name: progarm_4.c
 * Purpose: soln to project question 4.
 * Author: YT
 */

/* The output should be displayed using tive digits, even if fewer digits are sufficient Hint: To
convert the number Lo octa'I, first divide il by 8; the remainder is the last digit of the octal
nun1ber ( 1, in this case). Then divide the original number by 8 and repeat the process to
arrive at the next-to- last digit. (printf is capable of displaying nu1nbers in base 8, as we'll
see in Chapter 7, so there's actually an easier way to write this program.) */

#include <stdio.h>
int main(void) {
	int n;
	printf("enter a number between 0 and 32767: ");
	scanf("%d", &n);

	if (n > 32767 || n < 0) {
		printf("number can't be smaller than 0 and greater than 32767\n");
	}

	// octal conversion of the number
	printf("octal base 8: %.5o\n", n);

	// hex conversion
	printf("hex base 16: %.5x\n", n);

	// using the hint above
	int temp[5];
	int i;
	for (i = 0; i < 5; i++) {
		int remainder = n%8;
		temp[i] = remainder;
		n = n/8;
	}
	
	// print octal values i.e should be reverse --> last value stored in first index
	printf("octal using hint: ");
	for (i = 4; i >= 0; i--) {
		printf("%d", temp[i]);
	}
	printf("\n");
	return 0;
}

