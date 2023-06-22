#include "main.h"
/**
 * print_triangle - Prints an inverse triangle
 * shape with spaces before '#' symbols.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
putchar(' ');
}

for (j = 0; j <= i; j++)
{
putchar('#');
}

putchar('\n');
}
}
