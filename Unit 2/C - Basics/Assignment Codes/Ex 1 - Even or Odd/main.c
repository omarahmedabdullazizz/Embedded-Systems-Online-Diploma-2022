/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This code decides whether the input number is EVEN or ODD

#include <stdio.h>
int main (int argc, char **argv)
{
	int x;
	printf("Enter an Integer you want to check whether its Even or Odd: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	if (x%2 == 0)
	{
		printf("\n%d is Even", x);
	}
	else
		printf("\n%d is Odd", x);
	return 0;
}
