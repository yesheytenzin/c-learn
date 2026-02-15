/*
 * Name: progarm_6.c
 * Purpose: soln to project question 6.
 * Author: YT
 */

/* European countries use a 13-digit code, known as a ELTropean Article Nu1nber (EAN)
instead of the l2-digit Universal Product Code (UPC) found in North America. Each BAN
ends •..,iitb a check digit, just as a UPC does. The technique for calculating the check digit is
also similar:
Add the second. fourth. sixth, eighlh, tenth, and twelfth digits.
Add the first, third. fifth. seventh. ninth, and c levenlh digirs.
Multiply the first stun by 3 and add it to the seconu surn. */

/* Subtract 1 from Lhe total.
Compute the remainder \¥hen Lhe adjusted total is divided by J 0.
Subtract Lhe remainder from 9.
For example. consider Gulli.ioglu Turkish Delight Pistachio & CoconuL which bas an EAN
of 8691484260008. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17. and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying lhe first sum by 3 and adding the second yields 82. SubtracLing l gives 81. The remainder upon dividing by 10 is 1. When the remainder is subtracted
from 9, the result is 8, which matches Lhe last digit of Lhe original code. Your job is to modify the upc . c program of Section 4.1 so Lhat iL calculates the check digit for an EAN.The user will enter the first 12 digit<; of the EAN as a single number:
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8 */

#include <stdio.h>
int main(void) {
	int i1,i2,i3,i4,i5,i6;
	int j1,j2,j3,j4,j5,j6;

	printf("enter the EAN 12 digit number: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);

	// main algorithm to calculate check digit
	int first_sum = i2 + i4 + i6 + j2 + j4 + j6;
	int second_sum = i1 + i3 + i5 + j1 + j3 + j5;
	int total = (3 * first_sum) + second_sum;
	total = total - 1;
	int remainder = total % 10;
	int final = 9 - remainder;
	printf("check digit: %d\n", final);

	return 0;
}

