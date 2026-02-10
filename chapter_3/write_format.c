/*
* Name: write_output.c
* Purpose: 1st exerice
* Author: YT
*/

#include <stdio.h>
int main(void) {
	printf("%-8.1e\n", 1.0); // Exponential notation; left-justified in a field of size 8: one digit after the decimal point
	printf("%10.6e\n", 1.0); // Exponential notation; right-justilied i.n a field of size LO~ six digits after lhe decin1al
	printf("%-8.3f\n", 1.0); // Fixed decimal notation: left-justified in a field of size 8; three ctigics after the decimal
	printf("%6.0f\n", 1.0); // Fixed decimal notation; right-justified in a field of size 6: no djgits after Lhe decimal
	return 0;
}
