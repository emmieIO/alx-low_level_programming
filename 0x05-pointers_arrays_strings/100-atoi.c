#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
int t = sign * result;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');

/* Break if the next character is not a digit */
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}

i++;
}

return (t);
}
