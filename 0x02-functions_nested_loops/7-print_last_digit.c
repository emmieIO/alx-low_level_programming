#include "main.h"

/**
 * print_last_digit - Computes and returns the last digit of a number.
 * @number: The number from which to extract the last digit.
 *
 * Return: The last digit of the given number.
 */
int print_last_digit(int number)
{
	int  last = number % 10;
	if(last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
