/*
 * Name: output_3.c
 * Purpose: soln to exercise question 3
 * Author: YT
 */

/* The fo llowi ng program fragments illustrale the ~hort-circ11i t behavior of logical expressions.
Show the output produced by each, asswning that i, j. and k are int variables.
(a) i = 3 ; j = 4 ; k = 5;
printf( 11 %d ", i < j
II ++j < k);
printf("%d %d Id'', i, j, k);
(b) i = 7 ; j = 8; k = 9;
printf( 11 %d 11 , i - 7 && j++ < k);
printf("ld Id Id'', i, J, k);
(C) i = 7; j = 8; k = 9;
print:f ( 11 %d ", Ii = j) 11 (j = k) ) i
printf(''%d %d %d 11 , i, j, k);
(d) i = 1; j = 1; k = 1;
printf ( '' %d 11 , ++i 11 ++j && ++k) ;
printf ( 11 %d %d %d 11 , i, j, k);*/

#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	//a
	i = 3; j = 4; k = 5;
	printf("%d\n",i < j || ++j < k); // based on precedence increment, (relatioin, logical) --> left assocaitive
	/* output is 1*/
	printf("%d %d %d\n", i, j, k);
	/* output is 3 5 5 */
	
	//b
	i = 7; j = 8; k = 9;
	printf("%d\n", i - 7 && j++ < k); // based on precedence increment then additive then relational, logiacl --> left associative
	/* (7-7) && 8 < 9 --> 0 && 1 --> 0 */
	printf("%d %d %d\n", i, j, k);
	/* output is 7 9 9  */

	//c
	i = 7; j = 8; k = 9;
	printf("%d\n", (i ==j ) || (j == k));
	/* output is 0 || 0 --> 0 */
	printf("%d %d %d\n", i, j, k);
	/* 7 8 9*/

	//d
	i = 1; j = 1; k = 1;
	printf("%d\n", ++i || ++j && ++k); // right assocaitive increment then left assocaitive logical
	/* 2 || 2 && 2 --> 1 && 2 ---> 1 ...note non-zero is assigned value 1  */ 
	printf("%d %d %d\n", i, j, k);
	/* 2 2 2 */

	/*
	 * actual output that is to be displayed as per the question --> output not predictable
	 * incaseof only increment as we don't know the actual sequence point
	 *	1
		3 4 5
		0
		7 8 9
		0
		7 8 9
		1
		2 1 1
	*/
	return 0;
}
