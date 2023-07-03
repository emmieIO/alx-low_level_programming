#include <unistd.h>
#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int i, start;

if (str == NULL)
return;

while (str[length] != '\0')
length++;

start = (length + 1) / 2;

for (i = start; i < length; i++)
if (write(1, &str[i], 1) == -1)
return;

write(1, "\n", 1);
}
