#include "lists.h"

/**
 * free_listint - Function that free memomry allocated to a node in list
 * @head: paremeter of poitner to node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
