#include <stdio.h>
#include <limits.h> // Added for UINT_MAX
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: If an error occurs - 0. 
 *         Otherwise - The number of nodes in the list.
 */ 
size_t print_list(const list_t *h)
{
unsigned int nodes = 0;
int error = 0;

if (h == NULL) /* Check for empty list */
{
return (0);
}

while (h != NULL) 
{
if (nodes > UINT_MAX) /* Check for overflow */
{
error = 1;
break;
}

if (h->str == NULL) /* Check for NULL string */
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

if (error)
{
return (0);
}

return (nodes);
}