#include "lists.h"

/**
 * insert_nodeint_at_index - Function entry point
 * @head: Pointer to node listint_t
 * @idx: index at which data should be inserted
 * @n: data to be inserted
 *
 * Return: returns a linked list listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp,*newNode;
	unsigned int count = 0;

	temp = *head;

	if(idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL) return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp != NULL)
	{
		if(count == idx - 1)
		{
			newNode = malloc(sizeof(listint_t));

			if (newNode == NULL) return (NULL);
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		count++;
	}

	return (NULL);

}
