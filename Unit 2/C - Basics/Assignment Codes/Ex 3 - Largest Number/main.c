/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This Program takes three INPUT numbers from the user to decide the largest among them

#include <stdio.h>
int main()
{
	float a, b, c;

	printf("Enter Three Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);

	if (a>b && a>c)
	{
		printf("\n.3%f is the Largest Number", a);
	}
	else if (b>a && b>c)
	{
		printf("\n.3%f is the Largest Number", b);
	}
	else
		printf("\n%.3f is the Largest Number", c);
	return 0;
}
