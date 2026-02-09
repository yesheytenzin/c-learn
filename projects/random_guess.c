/*
* Name: random_guess.c
* Purpose: random number guess game
* Author: YT
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// number random generate. rand() generate values from 0 to 1.0
	int random = rand() % 10;
	int guess;

		while(1>0) {
			printf("Guess the number: ");
			scanf("%d", &guess);

			if (random < guess ) {
				printf("guess to big\n");
				continue;

			} else if (random > guess) {
				printf("guess too small\n");
				continue;

			} else {
				printf("correct guess\n");
				break;
			}
	}
		return 0;
}
