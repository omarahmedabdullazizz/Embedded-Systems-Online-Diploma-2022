/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This Program acts like a simple calculator (+, -, *, /)

#include <stdio.h>
int main()
{
	char operator;
	int x1;
	int x2;
	int result;

	printf("Enter the Operator's symbol. Either +, -, *, or /: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);

	printf("\nEnter the two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x1, &x2);
	switch (operator)
	{
	case '+':
	{
		result = x1 + x2;
		printf("\n%d + %d = %d", x1, x2, result);
	}
	break;
	case '-':
	{
		result = x1 - x2;
		printf("\n%d - %d = %d", x1, x2, result);
	}
	break;
	case '*':
	{
		result = x1 * x2;
		printf("\n%d * %d = %d", x1, x2, result);
	}
	break;
	case '/':
	{
		result = x1 - x2;
		printf("\n%d - %d = %d", x1, x2, result);
	}
	break;

	default:
		printf("\nWrong Choice. Try Again.");
		break;
	}

	return 0;
}
