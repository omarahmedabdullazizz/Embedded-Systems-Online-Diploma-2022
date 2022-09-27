/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This Program checks whether the INPUT character is an Alphabet OR Not

#include <stdio.h>
int main()
{
	char c;

	printf("Enter a Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if (c>='a' && c<='z')
	{
		printf("\n%c is an Alphabet", c);
	}
	else if (c>='A' && c<='Z')
	{
		printf("\n%c is an Alphabet", c);
	}
	else
		printf("\n%c is an NOT an Alphabet", c);
return 0;
}
