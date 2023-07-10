#include "main.h"
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + len2;

	char *concatenated_str = (char *)malloc((total_len + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return NULL;

	strcpy(concatenated_str, s1);
	strcat(concatenated_str, s2);

	return concatenated_str;
}
