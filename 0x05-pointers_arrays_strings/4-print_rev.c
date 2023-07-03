#include <unistd.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
length++;

for (i = length - 1; i >= 0; i--)
if (write(1, &s[i], 1) == -1)
return;

write(1, "\n", 1);
}
