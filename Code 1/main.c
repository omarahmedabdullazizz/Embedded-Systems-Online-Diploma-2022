/*
 * main.c
 *
 *  Created on: Sep 20, 2022
 *      Author: Omar Ahmed
 */


// Store and print 10 students degrees using ARRYAS

#include <stdio.h>
int main ()
{
	int degrees [10];
	int i;

	for (i = 0; i < 10; i ++) // Loop for Entering the Values in the array.
	{
		printf("\r\nEnter Student Number %d Degree: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &degrees[i]);
	}

	for (i = 0; i < 10; i ++) // Loop for displaying the Values in the array.
	{
		printf("The Student Number %d Degree = %d\r\n", i, degrees[i]);
	}

	return 0;
}
