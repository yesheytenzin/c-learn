#pragma once /* make it such that header is included only once, so that the fun is not repeated */
/* another solution is to use header guard, which uses predecessor directives */
/*
 * #ifndef MY_HEADER_H
 * #define MY_HEADER_H
 *
 * // include cool codes
 *
 * #endif
*/

float get_average(int x, int y, int z);
char *get_temperature_status(int temp);
void print_numbers(int start, int end);
void print_numbers_reverse(int start, int end);
