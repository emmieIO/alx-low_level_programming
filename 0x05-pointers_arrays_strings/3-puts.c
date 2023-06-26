#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (write(1, &str[i], 1) == -1)
return;
i++;
}

write(1, "\n", 1);
}
