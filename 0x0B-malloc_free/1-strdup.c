#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
		size_t len;

		if (str == NULL)
		{
			return (NULL);
		}

		len = strlen(str);
		char *new_str = malloc((len + 1) * sizeof(char));

		if (new_str == NULL)
		{

			return (NULL);
		}
		strcpy(new_str, str);
		return (new_str);
}
