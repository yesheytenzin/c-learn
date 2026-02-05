/*
* Name: loan.c
* Purpose: loan remaining balance after 3 monlthy payments
* Author: YT
*/

#include <stdio.h>
int main(void)
{
	float amount, interest, monthly;

	printf("enter amount of loan: ");
	scanf("%f", &amount);
	printf("enter interest rate: ");
	scanf("%f", &interest);
	printf("enter monlthy payment: ");
	scanf("%f", &monthly);

	float interest_amount_first = amount + (amount * interest/100 * 1/12);
	float first = interest_amount_first - monthly;
	printf("first month payment: %.2f\n", first);

	float interest_amount_second = first + (first * interest/100 * 1/12);
	float second = interest_amount_second - monthly;
	printf("seconf month payment: %.2f\n", second);

	float interest_amount_third = second + (second * interest/100 * 1/12);
	float third = interest_amount_third - monthly;
	printf("third month payment: %.2f\n", third);

	return 0;
}

