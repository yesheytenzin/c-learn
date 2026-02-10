/*
* Name: scanf_distinguished.c
* Purpose: 3st exerice
* Author: YT
*/

// For each of the following pairs of scanf format strings, indicate whether or not the two
// strings are equivalent. lf Lhey're not. show how they can be distinguished

// %d vs *%d -- equivalent  -- star represents white space, white space before and after does not matter
// %d-%d-%d vs %d -%d -%d -- not equivalent as value: 1 -2 -3 would confict with the first which expects 1-2-3
// %f vs %f* -- star indicates whitespace -- not equivalent as space is required after the float value
// %f,%f vs %f, %f --  not equivalent as the second float value should start right after comma
