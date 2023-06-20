#include "main.h"

/**
 * print_last_digit - Computes and returns the last digit of a number.
 * @number: The number from which to extract the last digit.
 *
 * Return: The last digit of the given number.
 */
int print_last_digit(int number)
{
int last_digit = number % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}

return (last_digit);
}
