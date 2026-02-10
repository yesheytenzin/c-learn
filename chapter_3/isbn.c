/*
* Name: isbn.c
* Purpose: solve project question 3.
* Author: YT
*/

#include <stdio.h>
#include <string.h>
int main(void) {
	// define array of limit 50
	char isbn[50];

	// length of 13 digit
	// Enter ISBN: 978-0-393-97950-3
	// GS1 prefix: 978 or 979
	// Group identifier: 0
	// Publisher code: 393
	// Item number: 97950
	// Check digit: 3
	
	printf("what is the isbn: ");
	scanf("%s", isbn);
	printf("%s\n", isbn);
	
	char ch = '-';
	char new[13];
	int counter = 0;

	for (int i = 0; i < strlen(isbn); i++) {
		if(isbn[i] != ch) {
			// counter keeps track of the correct index of new array
			new[counter] = isbn[i];
			counter++;
		} else {
			continue;
		}
	}
	// marks the end of a string, if not garbase value might be printed with new[]
	new[counter] = '\0';

	if (strlen(new) != 13) {
		printf("%s", "error isbn value should not exceed 13 digits");
	}

	printf("GS1: %c%c%c\n", new[0], new[1], new[2]);
	printf("GI: %c\n", new[3]);
	printf("publisher: %c%c%c\n", new[4], new[5], new[6]);
	printf("item no: %c%c%c%c%c\n", new[7], new[8], new[9], new[10], new[11]);
	printf("check digit: %c\n", new[12]);
	return 0;
}

