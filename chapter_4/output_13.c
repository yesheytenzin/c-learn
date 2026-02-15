
/*
 * Name: output_12.c
 * Purpose: soln to exercie question 12
 * Author: YT
 */

/* Only one of the expressions ++i and i++ is exactly the san1e as ( i += 1); \.Vhich is it?
Justify your answer. */

#include <stdio.h>
int main(void) {
	int i = 1;
	i += 1;
	printf("actual value: %d\n", i); // output --> 2

	// reset i value
	i = 1;

	// postfix increment
	int k = i++;
	printf("postfix: %d\n", k); // output --> 1

	// reset i value back
	i = 1;

	// prefix increment
	int l = ++i;
	printf("prefix: %d\n", l); // output --> 2
	
	/* based on the program, we can note that the correct answer is prefix as it increment early and store, whereas as for postfix it stores and increment in the next sequence point. same as when we use it in for loop, where we first run the program once for eg i=0 and the increment in next turn if the condition gets satisfied */
	return 0;
}
