#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list and detects cycles.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function prints the elements of a listint_t linked list.
 * If the linked list contains a cycle, the program is terminated with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t node_count = 0;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
node_count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
node_count++;
}

return (node_count);
}

