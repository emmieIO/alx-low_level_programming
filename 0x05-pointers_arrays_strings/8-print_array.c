#include <unistd.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array to be printed.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
int i;
char buffer[20];

for (i = 0; i < n; i++)
{
int len = snprintf(buffer, sizeof(buffer), "%d", a[i]);
write(1, buffer, len);
if (i != n - 1)
write(1, ", ", 2);
}

write(1, "\n", 1);
}

