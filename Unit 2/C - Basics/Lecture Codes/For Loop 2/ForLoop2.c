/*
 * ForLoop2.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */

// Calculate the sum of numbers from 1 to 99

#include<stdio.h>
int main (int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i<=99; i++)
	{
		sum = sum + i;  // OR sum+= i;   Same Idea but different execution.
	}
printf("The Summation of numbers between 1 and 99 = %d", sum);
}
