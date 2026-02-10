/*
* Name: test_scanf.c
* Purpose: test what happens to output when you enter wrong input
* Author: YT
*/

#include <stdio.h>
int main(void) {
	int num;
	printf("enter a num: ");
	scanf("%d", &num);
	printf("the num is : %d\n", num);

	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d - %d\n", a,b);
	return 0;
}

// input 123foo --> output 123
// input foo --> output 0

