/*
 * Name: smallest_num.c
 * Purpose: given a num, see how possible it is to divide by num by values of 20 10 5 1 
 * Author: YT
*/

#include <stdio.h>
int main(void)
{
	int num, tmp;
	printf("enter a dollar num: ");
	scanf("%d", &num);

	/* divide by 20 */
	int by20 = num / 20;
	printf("20$: %d\n", by20);
	tmp = num - (20 * by20);

	/* divide by 10 */
	int by10 = tmp / 10;
	printf("10$: %d\n", by10);
	
	/* divide by 5 */
	tmp = tmp - (10 * by10);
	int by5 = tmp / 5;
	printf("5$: %d\n", by5);
	
	/* divide by 1*/
	tmp = tmp - (5 * by5);
	int by1 = tmp / 1;
	printf("$1: %d\n", by1);
	
	return 0;
}
