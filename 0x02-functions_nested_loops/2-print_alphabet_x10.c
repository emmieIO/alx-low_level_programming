#include "main.h"
/**
 * print_alphabet_x10 - function.
 *
 * Description: function to print alphabets 10 times.
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char c;
	for (counter; counter < 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			
		}
		_putchar('\n')
	}
}
