#include "main.h"
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The array of arguments.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 *         Each argument is followed by a newline character in the new string.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j;
char *concatenated_str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
total_length += strlen(av[i]) + 1;

concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated_str == NULL)
return (NULL);

for (i = 0, j = 0; i < ac; i++)
{
strcpy(concatenated_str + j, av[i]);
j += strlen(av[i]);

concatenated_str[j++] = '\n';
}
concatenated_str[j] = '\0';

return (concatenated_str);
}

