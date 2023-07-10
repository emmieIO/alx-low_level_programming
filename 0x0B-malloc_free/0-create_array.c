#include "main.h"

/**
 * create_array - function that creates the array
 * @size:Represents the size of the array
 * @c:Represents a character in the array
 * Return:returns a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(array));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i; i < size; i++)
	{

		array[i] = c;
	}

	return (array);
}
