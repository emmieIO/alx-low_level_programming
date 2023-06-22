#include "main.h"

/**
 * print_square - Prints a square shape consisting of '#' symbols.
 * @size: The size of the square (number of rows and columns).
 */

void print_square(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar(35);
}
putchar('\n');

}
}
