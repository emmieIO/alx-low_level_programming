#include "main.h"

/**
 * times_table - Generates a multiplication time table from 0 to 9.
 *
 * Return: None (void).
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;
_putchar(result);
}
_putchar("\n");
}
}

