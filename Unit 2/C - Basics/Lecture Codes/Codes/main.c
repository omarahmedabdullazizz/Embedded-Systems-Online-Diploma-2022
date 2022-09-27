/*
 * main.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */

// This Code is to demonstrate the Input/Output Concept

#include <stdio.h>

int main()
{
	int f;
	printf("Enter your number here:  ");
	fflush(stdout);   // To Overcome the buffer problem.
	scanf("%d", &f);
	printf("The Value = %d", f);
	return 0;
}
