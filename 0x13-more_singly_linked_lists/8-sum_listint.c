#include "lists.h"

/**
 * sum_listin - Entry point of sum function
 * @head: Params of pointer to node
 * Return: returns int of sum node data;
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum,data;
	

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	data = temp->data;
	while (temp->next != NULL)
	{
		sum += data;
		temp = temp->next;
	}

	return (sum);



}
