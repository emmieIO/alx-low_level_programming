#include <unistd.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
if (write(1, &str[i], 1) == -1)
return;
i++;
}

write(1, "\n", 1);
}
