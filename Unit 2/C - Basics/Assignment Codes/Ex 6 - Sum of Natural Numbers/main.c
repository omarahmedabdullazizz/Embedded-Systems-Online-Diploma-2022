/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This Program Calculates the sum of Natural numbers up to a limit decided by the user

#include <stdio.h>
int main()
{
	int n;
	int i;
	int sum = 0;
	printf("Enter the Number you'd like to calculate the sum up to: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for (i = 1; i<=n; i++)
	{
		sum = sum + i;
	}
	printf("\n The Sum to %d = %d", n, sum);
	return 0;
}
