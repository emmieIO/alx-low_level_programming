#include "lists.h"

/**
 * free_listint2 - Function that free memomry allocated to a node in list
 * @head: paremeter of poitner to node
 */
void free_listint2(listint_t **head)
{

	listint_t *temp;

	temp = *head;

	while (*temp != NULL)
	{
		*head = (*head)->next;
		free(temp);

	}
}
