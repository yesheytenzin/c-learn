/*
* Name: date.c
* Purpose: format date 
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int mm,dd,yyyy;
	printf("enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm,&dd,&yyyy);
	// yyyy should be 4 width and month and height of 2 width
	// adding .2f introduces zeros
	printf("your date entered: %4d%.2d%.2d\n",yyyy,mm,dd);
	return 0;
}
