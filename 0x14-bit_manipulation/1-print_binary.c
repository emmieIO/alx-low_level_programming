#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(n) * 8) - 1);
	int leading_zeros = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (leading_zeros)
	{
		_putchar('0');
	}
}
