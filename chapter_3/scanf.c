/*
* Name: scanf.c
* Purpose: exaples for scanf
* Author: YT
*/

// simillar to printf scanf should also check the number of conversison specifications
// & is not necessary but good comvention to use, may cause unnecessary issue if not used
// most pro avoid using scanf, isntead they convert all data in charcter form and convert it later
// is a pattern matching fucntion- matches input with converison specifications
//
#include <stdio.h>
int main(void) {
	int a;
	int b;

	// implementing , in the scanf field causes errors as when scanf reads data it check for match such as
	// first int and then comma finally the next int
	// also implementing \n in scanf format string also causes issue as it is same as reading whitespace
	scanf("%d , %d\n", &a,&b);
	return 0;
}
