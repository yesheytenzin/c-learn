#include "exercise.h"
#include <stdio.h>

void print_numbers_reverse(int start, int end) {
	while (start >= end) {
		printf("%d\n", start);
		start--;
	}
}

void print_num(int start, int end) {
	do {
		printf("%d\n", start);
		start--;
	} while (start >= end); /* at least prints the staring num once*/
}

int main(void) {
	print_num(5, 1);
	return 0;
}
