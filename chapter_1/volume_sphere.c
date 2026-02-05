/*
 * Name: volume_sphere.c
 * Purpose: compute volume of sphere
 * Author: YT
*/


#include <stdio.h>

#define VOLUME (4.0f / 3.0f)
#define PI 3.14f

int main(void)
{	
	float radius;
	printf("enter radius: ");
	scanf("%f", &radius);
	float r3 = radius * radius * radius;
	float v = VOLUME * PI * r3;
	printf("radius: %f\n", radius);
	printf("volume: %f\n", v);
	return 0;
}



