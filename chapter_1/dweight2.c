/*
* Name: dweight2.c
* Purpose: computes dimensional weight
* Author: YT
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
	int height, width, length;
	int volume;

	printf("what is the height?: ");
	scanf("%d", &height);
	printf("what is the width?: ");
	scanf("%d", &width);
	printf("what is the length?: ");
	scanf("%d", &length);

	volume = height * width * length;
	
	/* + 165 is used to round up the value*/
	int weight = ( volume + INCHES_PER_POUND - 1 ) / INCHES_PER_POUND;

	printf("Volume: %d\n", volume);
	printf("Dimensional Weight: %d\n", weight);
	return 0;
}
