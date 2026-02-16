/*
 * Name: output_1.c
 * Purpose: soln to exercise question 1
 * Author: YT
 */

/* The fo llowing progran, fragi11enls illustrate lhe relational and equality operators. Show the
output produceu by eacb. assuming thaL i. j. and k are int variables.
(a) i = 2 ; j = 3 ;
k = i * j == 6;
printf ( 11 %d 11 , k) ;
(b) i = 5; j = 10; k = 1;
printf( 11 %d 11 , k > i < j);
(c) i :: 3; j = 2; k = 1;
printf ("Id", i < j == j < k);
(d) i = 3; j = 4; k = 5;
print£ ( 11 %d 11 , i % j + i < k) ; */

#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	//a
	i = 2; j = 3; 
	k = i * j == 6; // (i * j) == 6 --> (6) == 6 --> 1 (true)
	printf("%d\n", k);
	/* the output is 1 which means the expressin is true after evaluation */

	//b
	i = 5; j = 10;  k = 1; // (0) > 10 --> 0 (false)
	printf("%d\n", k > i > j); // (k > i) > j follow the rule of left association
	/* output is 0 as the expression is evaluated to false 0 */

	//c
	i = 3;
	j = 2;
	k = 1;
	printf("%d\n", i < j == j < k); // (i < j) == (j < k) --> 0 == 0 --> 1 (true)
	/* output is 1 as the expression evaluated to true i.e 1 */

	//d
	i = 3; j = 4; k = 5; // ((1)+5) < 5 --> 0 (false)
	printf("%d\n", i % j + i < k); // ((i % j) + k ) < k. based on precedence we get multiplicative, additive and relational
	/* output is false as the expression evaluates to false i.e 0 */ 
	return 0;
}
