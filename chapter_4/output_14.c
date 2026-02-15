/*
 * Name: output_14.c
 * Purpose: soln to exercie question 14
 * Author: YT
 */

/* Supply parentheses Lo show how a C compiler would interpret each of the following expressions */

// a * b - c * d + e
/* based on precedence multiplication is first and if more than one, use left associatiivity
 * so the answer is (a*b) - (c*d) + e --> (((a*b) - (c*d)) + e)
 */

// a / b % c / d
/* based on associatiivity as there is multiple multiplicative expressions, we do left associative
 * answer: (((a/b) % c) / d)
 * */

// - a - b + c - + d
/* additative expression so we follow left associative 
 * answer: ((((-a)-b)+c)- (+d))
 * */

// a * - b / c - d
/* based on precedence uniary, multiplicative over additive, and also take not of associatiivity
 * answer:  a* (-b) / c - d --> (((a*(-b))/c) -d)
 * */
