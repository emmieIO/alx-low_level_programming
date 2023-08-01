#include "lists.h"
size_t loop_length(const listint_t *head);

/**
 * print_listint_safe - Function to print a listint_t linked list safely
 * @head: Pointer to the head node of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	size_t loop_len;

	if (head == NULL)
	{
		return (0);
	}

	loop_len = loop_length(head);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;

		if (node_count == loop_len)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

	}

	return (node_count);

}


/**
 * loop_length - Function to calculate the length of a loop in a list
 * @head: Pointer to the head node of the list
 * Return: The length of the loop if there is a loop, 0 otherwise
 */
size_t loop_length(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = slow->next;
			count = 1;
			while (slow != fast)
			{
				slow = slow->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}
