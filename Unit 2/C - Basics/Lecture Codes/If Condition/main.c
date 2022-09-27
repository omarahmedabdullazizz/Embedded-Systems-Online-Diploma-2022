/*
 * main2.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */


//This code demonstrates the If-Else If-Else Conditions

#include <stdio.h>
int main(int argc, char **argv)
{
	char choice;
	float radius;
	float area;
	float circumeference;

	printf("Enter the Circle's Radius:  ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf("Enter your choice. a is for calculating the area, and c is for calculating the circumference:  ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);

	if (choice == 'a')
	{
		area = 3.14*radius*radius;
		printf("\r\nYour Circle's area = %f\r\n", area);
	}
	else if (choice == 'c')
	{
		circumeference = 2*3.14*radius;
		printf("\r\nYour Circle's circumeference = %f\r\n", circumeference);
	}
	else
		printf("Wrong Choise");

	return 0;
}
