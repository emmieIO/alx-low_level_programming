#include <stdio.h>

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
int i = 0;

/* Skip whitespace characters */
while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;

/* Check for sign */
if (s[i] == '-' || s[i] == '+')
{
sign = (s[i] == '-') ? -1 : 1;
i++;
}

/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
/* Check for overflow */
if (result > (INT_MAX - (s[i] - '0')) / 10)
return (0); /* Overflow occurred, return 0 */

result = result * 10 + (s[i] - '0');
i++;
}

return (sign * result);
}
