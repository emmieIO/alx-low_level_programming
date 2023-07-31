#include "lists.h"

/**
 * add_nodeint - Function to add an element to a linked list
 * @head:	head param
 * @n:		data param
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);

	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);


}
