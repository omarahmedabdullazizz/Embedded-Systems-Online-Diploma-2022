/*
 * main.c
 *
 *  Created on: Sep 25, 2022
 *      Author: Omar Ahmed
 */


// This Code checks whether the INPUT CHARACTER is a VOWEL or Not

#include <stdio.h>
int main()
{
	char c;

	printf("Enter an Alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u')
	{
		printf("\n%c is a VOWEL", c);
	}
	else if (c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U')
	{
		printf("\n%c is a VOWEL", c);
	}
	else
		printf("\n%c is not a VOWEL", c);
	return 0;
}
