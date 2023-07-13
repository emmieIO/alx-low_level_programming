#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: On success, returns a pointer to the concatenated string.
 * On failure, returns NULL.
 *
 * Description: The returned pointer points to a newly allocated space in memory,
 * containing s1 followed by the first n bytes of s2, and null terminated.
 * If n is greater or equal to the length of s2, the entire string s2 is used.
 * If NULL is passed for s1 or s2, it is treated as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len, s2_len, concat_len;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);


if (n >= s2_len)
n = s2_len;

concat_len = s1_len + n;


concat = malloc((concat_len + 1) * sizeof(char));
if (concat == NULL)
return (NULL);


strncpy(concat, s1, s1_len);
strncpy(concat + s1_len, s2, n);

concat[concat_len] = '\0';
return (concat);
}
