/*
* Name: escape_sequence.c
* Purpose: exaples using common escape sequence
* Author: YT
*/

/* /n - next line 
 * /a - alert
 * /b - backspace
 * /t - horizontal tab
 * allows strings to contain characters that can causer errors such as "
 */

#include <stdio.h>
int main(void) {
	printf("Item\tUnit\t:Purchase\n\tPrice\tDate\n");
	printf ("\"Hello!\"\n") ;
	printf("\\\n");
	return 0;
}
// output
// Item		Unit	:Purchase
//			Price	Date
// Hello!   -- \" represents the charcter "
// \ is printted using two \\
