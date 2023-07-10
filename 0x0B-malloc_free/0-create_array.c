#include "main.h"

/**
 * create_array - function that creates the array
 * @size:Represents the size of the array
 * @c:Represents a character in the array
 * Return:returns a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(array));

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{

		array[i] = c;
	}

	return (array);
}
