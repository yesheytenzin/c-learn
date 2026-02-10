/*
* Name: session_program.c
* Purpose: solve project question 2. mostly implements tab (which are escape sequence)
* Author: YT
*/


#include <stdio.h>
int main(void) {
	int items, mm, dd, yyyy;
	float unit;
	printf("enter item numbber: ");
	scanf("%d", &items);
	printf("enter unit price: ");
	scanf("%f", &unit);
	printf("enter purchase date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	if (unit <= 9999.99) {
			printf("Items\tUnit\tPurchase\n\tprice\tdate\n%d\t$ %.2f\t%.2d/%.2d/%.4d\n", items, unit, mm, dd, yyyy);
	}
	return 0;
}

// output
// enter item numbber: 583
// enter unit price: 13.50
// enter purchase date(mm/dd/yyyy): 3/1/2011
// Items	Unit	Purchase
//          price	date
// 583		$ 13.50	03/01/2011
