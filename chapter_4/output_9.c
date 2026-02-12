/*
 * Name: output_9.c
 * Purpose: soln to exercie question 9
 * Author: YT
 */

#include <stdio.h>
int main(void) {
	//a
	int i = 7;
	int j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j); // ouput 63 8. -- + has higher precedence than *= i.e assignment
	
	//b
	int k;
	i = j = k = 1;
	i += j += 1;
	printf("%d %d %d\n", i, j, k); // ouput 3 2 1  use associaativity hence start from the right. so j value is increased to 2 further eval gives i=3
	
	i = 1;
	j = 2;
	k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k); // ouput 2 -1 3  use associativity for assignment starting from right
	
	i = 2;
	j = 1;
	k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k); // ouput 0 0 0  use associativity for assignment starting from right
	return 0;
}

