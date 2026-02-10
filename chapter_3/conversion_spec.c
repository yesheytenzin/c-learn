/*
* Name: conversion_spec.c
* Purpose: conversion specification example and some rules to follow
* Author: YT
*/


#include <stdio.h>

int main(void) {
	int a = 10;
	float b = 10.222;
	char c = 'y';
	char *d = "yeshey tenzin";

	/* amount of conversion specification denoted by % and its replacee=ment should be of equal length*/
	/* specificer and its converted data type should match*/
	printf("%d - %f - %c - %s\n", a,b,c,d);
	return 0;
}
