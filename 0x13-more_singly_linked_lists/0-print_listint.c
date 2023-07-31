#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: pointer to node.
 *
 * Return: The number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	
	return (count);

}
