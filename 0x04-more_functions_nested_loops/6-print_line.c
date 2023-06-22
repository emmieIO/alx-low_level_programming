#include "main.h"

/**
 * print_line - Print a line of underscores
 * @n: Number of underscores to print
 */
void print_line(int n)
{
for (int i = 0; i < n; i++)
{
_putchar(95);  /* Print an underscore character */
}
_printf("\n");  /* Print a newline character */
}
