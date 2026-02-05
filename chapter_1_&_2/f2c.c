/*
* Name: f2c.c
* Purpose: farenheit to celcius
* Author: YT
*/

#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float farenheight, celsius;

	printf("Enter farenheit temperature: ");
	scanf("%f", &farenheight);

	celsius = ( farenheight - FREEZING_POINT ) * SCALE_FACTOR;
	printf("Celcius equivalent: %.2f\n", celsius);

	return 0;
}
