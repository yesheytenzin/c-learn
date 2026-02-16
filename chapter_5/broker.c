/*
 * Name: broker.c
 * Purpose: calculating a broker's commission
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	float commission, value;

	printf("enter value of trade: ");
	scanf("%f", &value);

	if (value < 2500.00) {
		commission = 30.00f + 0.017f * value;
	} else if (value < 6250.00) {
		commission = 56.00f + 0.0066f * value;
	} else if (value < 20000.00f) {
		commission = 76.00f + 0.0034f * value;
	} else if (value < 50000.00f) {
		commission = 100.00f + 0.0022f * value;
	} else if (value < 500000.00f) {
		commission = 155.00f + 0.0011f * value;
	} else {
		commission = 255.00f + 0.0009f * value;
	}

	// minimum commission is 39
	if (commission < 39.00f) {
		commission = 39.00f;
	}
	
	/* use of logical operatos to write the program such as value <= 6250 && value >= 2500 is not needed as after checking value < 2500 in first if makes it already true when checking value <= 6250 */

	printf("commission: $%.2f\n", commission);
	return 0;
}
