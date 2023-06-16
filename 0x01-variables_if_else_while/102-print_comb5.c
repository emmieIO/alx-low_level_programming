#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *              in ascending order, with each number printed with two digits.
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 100; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
putchar(' ');

if (num != 99)
{
putchar((num / 10) + '0');
putchar((num % 10) + 1 + '0');
putchar(',');

putchar(' ');

putchar((num / 10) + 1 + '0');
putchar((num % 10) + '0');

if (num != 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

