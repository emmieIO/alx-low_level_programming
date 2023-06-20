#include <stdio.h>

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
