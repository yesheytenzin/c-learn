/*
* Name: calculator.c
* Purpose: simple calculator app
* Author: YT
*/


#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int divide(int x, int y) {
	return x / y;
}

int multiply(int x, int y) {
	return x * y;
}



int main(void) {
	int x;
	int y;
	printf("enter num 1: ");
	scanf("%d", &x);
	printf("enter num 2: ");
	scanf("%d", &y);
	
	printf("Enter operation you want to perform: \n");
	printf("1. add\n");
	printf("2. subract\n");
	printf("3. divide\n");
	printf("4. multiply\n");

int result = 0;
	int opperation;

	scanf("%d", &opperation);
	switch (opperation) {
		case 1:
			result = add(x, y);
			printf("result: %d\n", result);
			break;

		case 2:
			result = subtract(x, y);
			printf("result: %d\n", result);
			break;

		case 3:
			result = divide(x, y);
			printf("result: %d\n", result);
			break;

		case 4:
			result = multiply(x, y);
			printf("result: %d\n", result);
			break;
	}
	return 0;
}
