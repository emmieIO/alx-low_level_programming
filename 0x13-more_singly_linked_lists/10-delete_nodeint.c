#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete a node at a given index
 * @head: Pointer to pointer to the head node
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	size_t count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
	if (count == index)
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}

	prev = temp;
	temp = temp->next;
	count++;
	}

	return (-1);
}

