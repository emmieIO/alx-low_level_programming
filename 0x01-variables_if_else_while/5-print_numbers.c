#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers in base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');
number++;
}

putchar('\n');

return (0);
}
