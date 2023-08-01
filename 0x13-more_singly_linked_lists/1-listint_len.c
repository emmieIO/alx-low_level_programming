#include "lists.h"

/**
 * listint_len - a function that prints the length of alist.
 *
 * @h: pointer to node.
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;

	}

	return (count);

}
