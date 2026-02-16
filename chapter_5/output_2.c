/*
 * Name: output_1.c
 * Purpose: soln to exercise question 1
 * Author: YT
 */

/* The following program frng1nents illustrale lbe logical operators. Show the output produced
by each, assuming that i, j. and k are int variables.
(aj
i = 10; j = 5;
print:£ ( '1 %d 11 , ! i < j);
(b) i = 2; j = 1;
printf ( "%d " 1 I 1i + ! j ) ;
(c) i = 5; j = 0; k = -5;
print£ ( 11 %d 11 , i && j 11 k);
(d) i == 1; j = 2; k = 3;
printf("%d", i < j II k); */

#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	//a
	i = 10; j = 5;
	printf("%d\n", !i < j); // -10 < 5 --> true (1) ... ! unary has higher precedence than relational
	
	//b
	i = 2; j = 1;
	printf("%d\n", !!i + !j); // 2 + -1 --> 1 --> output is 1
	
	//c
	i = 5; j = 0; k = -5;
	printf("%d\n", i && j || k); // left assocative -- (i && j) || k --> (1 && 0) || 1
	// 0 || 1 --> output is 1, in C any non zero is assigned the value 1
	
	//d
	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k); // relational higher precedene than logical
	// (i < j) || k --> 0 || 1 --> 1 (true) ... non-zero is assigned 1
	return 0;
}
