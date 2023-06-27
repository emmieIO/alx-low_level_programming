#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
int foundDigit = 0;

while (*s == ' ')
{
s++;
}

if (*s == '-' || *s == '+')
{
if (*s == '-')
sign *= -1;
s++;
}

while (*s)
{
if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
foundDigit = 1;


if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > (INT_MAX % 10)))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}


result = (result * 10) + digit;
} else {

if (foundDigit)
break;
}

s++;
}

return result * sign;
}
