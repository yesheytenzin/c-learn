#include <iso646.h>
#include <stdio.h>

int main(void) {
	int a[50];
	int size, i, pos;
	int num = 10;
	int deleted;

	printf("size of array you want: ");
	scanf("%d", &size);
	// insertion into an array
	printf("enter pos to insert num and delete: ");
	scanf("%d", &pos);
	printf("\n");

	if (size > 50 || size < 1) {
		printf("error: out of bounds");
	} 

	// add values to  array
	printf("enter array value: ");
	for (i = 0; i < size; i++)	{
		scanf("%d", &a[i]);
	}
	printf("\n");

	// original array
	printf("original array: \n");
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	// pos should be always greater than 1 and less than size + 1
	// as insertion could happen at size + 1
	if (pos < 1 || pos > size + 1) {
		printf("error: out of bounds pos");
	}

	if (size == 50) {
		printf("array is already full");
	}

	// insertion
	/* best algo. move original value to end and in place add the new insert*/
	// a[size] = a[pos-1];
	// a[pos-1] = num;

	/* alternative solution is by shifting value to right starting from the end digit and then insertion */
	for (i =size -1; i >= pos -1; i--) {
		a[i+1] = a[i];
	}
	a[pos-1] = num;
	size++; /* increase in size after insertion */
	// traverse insertion array
	printf("insertion: \n");
	for (i = 0; i < size; i++)	{
		printf("%d ", a[i]);
	}
	printf("\n");


	/* deletion best algo store deleted value to another data structure and move last item to its's place */
	// deleted = a[pos -1];
	// a[pos-1] = a[size - 1];
	// size--;
	
	/* alternative deletion solution by shifting */
	deleted = a[pos-1];
	for (i=pos-1; i < size -1; i++) {
		a[i] = a[i+1];
	}
	size--; /* decrease in size after deletion */

	printf("deletion: \n");
	for (i = 0; i < size; i++)	{
		printf("%d ", a[i]);
	}
	printf("\n");	

	return 0;
}
