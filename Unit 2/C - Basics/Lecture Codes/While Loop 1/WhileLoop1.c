/*
 * WhileLoop1.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */

// This code uses a WHILE loop to calculate the sum of ODD values between 1 and 99


#include <stdio.h>
int main (int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	while (i<=99)
	{
		i = i+2;
		sum = sum + i;
	}
	printf("The sum of ODD values between 1 and 99 = %d", sum);
}
