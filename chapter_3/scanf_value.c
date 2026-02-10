/*
* Name: scanf_value.c
* Purpose: 3st exerice
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int i, j;
	float x;
	// scanf("%d%f%d", &i, &x, &j);
	/* if user enter input --> 10.3 5 6  what would be the output */ 
	// output after the call --> 10 .3 5
	//printf("%d - %f - %d\n", i, x, j);

	int a;
	float b,c;
	scanf("%f%d%f", &b,&a,&c);
	// if input 12.3 45.6 789
	// output 12.3 45 0.6
	printf("%f - %d -%f\n", b,a,c);
	return 0;
}
