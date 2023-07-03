#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is a letter (lowercase or uppercase).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}

