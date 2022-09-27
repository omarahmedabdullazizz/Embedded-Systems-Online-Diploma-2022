/*
 * Comparison.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */


// This code takes three INTEGERS as inputs and decides which is the largest

#include <stdio.h>
int main(int argc, char **argv)
{
	int a,b,c;
	printf("Enter your your three values here:  ");
	fflush(stdin); fflush(stdout); //Overcoming the BUFFER problem
	scanf("%d %d %d", &a, &b, &c);

	if (a>b && a>c)
	{
		printf("The Largest value is %d\r\n", a);
	}

	else if (b>a && b>c)
	{
		printf("The Largest value is %d\r\n", b);
	}
	else
		printf("The Largest value is %d\r\n", c);

return 0;
}
