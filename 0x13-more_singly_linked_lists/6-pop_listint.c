#include "lists.h"

/**
 * pop_listint - entry point of the function
 * @head: Pointer to node param
 *
 * Return: returns an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if ((*head) != NULL)
	{
		temp = (*head);
		data = temp->n;
		(*head) = (*head)->next;
		free(temp);

		return (data);
	}
	return (0);
}
