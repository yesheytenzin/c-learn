/*
* Name: m_pX.c
* Purpose: conversion specification example with formatting
* Author: YT
*/

#include <stdio.h>
int main(void) {
	float cost = 101.23;
	int random = 12345;
	// %m.pX where X is f(a letter) or it can have %-m.pX whereas m and p are integer
	printf("%10.2f\n", cost);
	printf("%10f\n", cost);
	
	printf("%-10.2f\n", cost);
	printf("%-10f\n", cost);

	/* m specific number of digit to print. also known as minimum field width  */
	/*
	 * result
	 *     101.23
	 * 101.230003
     * 101.23
	 * 101.230003
	 */

	printf("%4d\n", random); // random has 5 digit for +m --> no chnages
	printf("%-6d\n", random); // output 12345* (*) indicates a space
	
	// more examples
	printf("%5d\n", 7);     // → "    7"
	printf("%.5d\n", 7);    // → "00007"   (at least 5 digits)
	
	// for scientific notation
	printf("%.2e\n", 1234.567);  // → "1.23e+03"
	

	// %g auto chooses between scientific and normal
	printf("%g\n", 1234.5600);   // → "1234.56"    (no trailing zero)
	printf("%g\n", 0.000001234); // → "1.234e-06"  (switches to scientific)
 
	/*
	 * pertaining to with which is the m value
	 * printf("%5d", 42);    // prints: "   42"   (3 spaces + 42 = 5 chars)
	 * printf("%5d", 12345); // prints: "12345"   (too big → width ignored)
	 * printf("%-5d", 42);   // prints: "42   "   (42 first, then spaces)
	 */


	return 0;
}
