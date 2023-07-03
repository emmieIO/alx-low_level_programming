#include "main.h"

/**
 * swap_int - function to be executed
 *
 * @a: first int params
 * @b: second int params
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

