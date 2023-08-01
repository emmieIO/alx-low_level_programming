#include "lists.h"

/**
 * sum_listin - Entry point of sum function
 * @head: Params of pointer to node
 * Return: returns int of sum node data;
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;
	temp = head;
	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		
		temp = temp->next;
	}

	return (sum);



}
