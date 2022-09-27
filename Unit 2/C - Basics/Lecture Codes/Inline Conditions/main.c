/*
 * main.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */


// This Code demonstrates the Inline Condition Concept
// We take two numbers and decide the minimum

#include <stdio.h>
int main(int argc, char **argv)
{
	int a,b;
	printf("Enter your two values: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("The Minimum is %d ", (a<b)? a:b); //Inline Condition Here <<<
	return 0;
}
