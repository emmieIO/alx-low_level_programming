#include "lists.h"
/**
 * reverse_listint - Entry point to function
 * @head: Pointer to node
 *
 * Return: returns a struct typedef
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = *head;
	prev = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);

}
