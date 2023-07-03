#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a character is a decimal digit
 * @c: the character to be checked
 *
 * Return: 1 if c is a decimal digit, 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}

