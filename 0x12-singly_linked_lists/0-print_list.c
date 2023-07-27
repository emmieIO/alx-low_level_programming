#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)  
{
size_t nodes = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[%zu] (nil)\n", nodes);
}
else
{
printf("[%zu] %s\n", nodes, h->str);  
}

nodes++;
h = h->next;
}

return (nodes);
}
