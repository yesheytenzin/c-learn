/*
 * Name: tax.c
 * Purpose: add tax to amount
 * Author: YT
*/

#include <stdio.h>
#define TAX_PERCENTAGE (5.0f / 100.0f)

int main(void)
{
	float amount, tax, tax_amount;
	printf("enter amount: ");
	scanf("%f", &amount);

	tax = amount * TAX_PERCENTAGE;
	tax_amount = amount + tax;
	printf("with tax added: %.2f\n", tax_amount);
	return 0;
}
