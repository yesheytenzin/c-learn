/*
* Name: dweight.c
* Purpose: computes dimensional weight
* Author: YT
*/

#include <stdio.h>

int main(void)
{
	int height = 8;
	int width = 12;
	int length = 10;

	int volume = height * width * length;

	// height = 8;
	// width = 12;
	// length = 10;
	// volume = height * width * length;
	
	/* + 165 is used to round up the value*/
	// int weight = ( volume + 165 )/ 166;

	printf("Dimensional Weight: %d\n", ( volume + 165 ) / 166 );
	return 0;
}
