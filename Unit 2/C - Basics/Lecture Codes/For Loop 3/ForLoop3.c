/*
 * ForLoop3.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Omar Ahmed
 */

// This code calculates the average students degree for any given number of students

#include <stdio.h>
int main(int argc, char **argv)
{
	int nStudents, i;
	float sum, average, degrees;
	printf("Enter the required number of students: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nStudents);

	for(i = 1, sum = 0; i <= nStudents; i++)
	{
		printf("Student(%d) Degree =\r\n ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degrees);
		sum = sum + degrees;
	}

	average = sum/nStudents;
	printf("The degrees average for your students = %f", average);
}
