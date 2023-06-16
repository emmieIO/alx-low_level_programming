#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates how to
 * convert a string to lowercase.
 * The original and converted strings are printed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
