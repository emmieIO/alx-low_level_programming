#include "main.h"

/**
 * print_alphabet - function.
 *
 * Description: function to print alphabets.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}

/**
 * main - Program Enty point.
 *
 * Description: calls function to print alphabets.
 *
 * Return : Always returns (0) Success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
