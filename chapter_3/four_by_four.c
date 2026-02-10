/*
* Name: four_by_four.c
* Purpose: solve project question 5.
* Author: YT
*/

#include <stdio.h>
int main(void) {
	// initialize an empty 4 by 4 matrix
	int numbers[4][4];

	printf("enter numbers from 1 to 16 in any order: ");
	for (int i=0; i < 4; i++) {
		for (int j=0; j < 4; j++) {
			// assign values based on row and column values in order
			scanf("%d", &numbers[i][j]);
		}
	}
	printf("\n");
	printf("print 4 by 4:\n");

	// print in 4 by 4 dimension
	for (int i =0; i < 4; i++) {
		for (int j=0; j < 4; j++) {
			// print 4 by 4 matrix
			printf("%2d ", numbers[i][j]);
		}
		// new line after every 4 values
		printf("\n");
	}

	/* row sum */
	int sum[4];
	int tmp = 0;
	for (int i =0; i < 4; i++) {
		for (int j=0; j < 4; j++) {
			// add each index value to temporay value
			tmp += numbers[i][j];
		}
		// sum of each row becomes first index of sum array
		sum[i] = tmp;
		tmp = 0;
	}
	printf("\n");
	printf("sum: ");
	for (int i=0; i < 4; i++) {
		printf("%d ", sum[i]);
	} 


	/* column sum */
	int sum_column[4];
	int tmp_column = 0;
	for (int i =0; i < 4; i++) {
		for (int j=0; j < 4; j++) {
			// add each index value to temporay value
			tmp_column += numbers[j][i];
		}
		// sum of each column becomes first index of sum array
		sum_column[i] = tmp_column;
		tmp_column = 0;
	}
	printf("\n");
	printf("sum_column: ");
	for (int i=0; i < 4; i++) {
		printf("%d ", sum_column[i]);
	} 
	printf("\n");

	/* diagonal sum */
	int sum_diag[2];
	int tmp_diag = 0;
	int tmp_diag2 = 0;
	// first diagonal
	for (int i =0; i < 4; i++) {
			// add each index value to temporay value
		tmp_diag += numbers[i][i];
	}
	sum_diag[0] = tmp_diag;

	// second diagonal
	for (int i =0; i < 4; i++) {
		tmp_diag2 += numbers[i][3-i];
	}
	sum_diag[1] = tmp_diag2;

	printf("sum_diag: ");
	for (int i=0; i < 2; i++) {
		printf("%d ", sum_diag[i]);
	} 
	printf("\n");
	return 0;
}

