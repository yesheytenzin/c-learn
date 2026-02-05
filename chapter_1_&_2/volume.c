/*
* Name: volume.c
* Purpose: computes and prints volume
* Author: YT
*/

#include <stdio.h>

int main(void)
{
	int height, width, length;
	int volume;

	height = 10;
	width = 20;
	length = 10;
	volume = height * width * length;
	
	float PI = 3.1412121f;

	printf("Volume: %d\n", volume);
	printf("PI: %.3f\n", PI);
	return 0;
}
