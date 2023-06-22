#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, repeated 10 times
 */
void more_numbers(void)
{
int counter;
for (counter = 0; counter < 10; counter++)
{
int i;
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
}
