#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
unsigned int nodes = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[%u] (nil)\n", nodes); 
}
else
{
printf("[%u] %s\n", nodes, h->str);
}

nodes++;
h = h->next;
}

return (nodes);
}
