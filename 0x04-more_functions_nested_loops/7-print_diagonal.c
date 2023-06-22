#include "main.h"

/**
 * print_diagonal - Print a diagonal line with spaces and backslashes
 * @n: Number of times to print the diagonal line
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
