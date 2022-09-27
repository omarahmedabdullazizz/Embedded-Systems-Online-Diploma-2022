/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This program calculates the FACTORIAL of a given number
// If the given number is negative. There won't be a factorial

#include <stdio.h>
int main()
{
	int fact = 1;
	int n;
	int i;

	printf("Enter the Number you'd like to calculate the Factorial of: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	if (n>0)
	{
		for (i=1; i<=n; i++)
		{
			fact = fact*i;   // Factorial Calculation Formula
		}
		printf("\nFactorial of %d = %d", n, fact);
	}
	else if(n == 0)
	{
		printf("\nFactorial of 0 = 1");
	}
	else
		printf("\nFactorial of Negative Numbers DO NOT EXIST!");
	return 0;
}
