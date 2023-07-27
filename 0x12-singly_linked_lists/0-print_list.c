#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;
const list_t *current_node = h;

while (current_node != NULL)
{
if (current_node->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current_node->len, current_node->str);
}

node_count++;
current_node = current_node->next;
}

printf("-> %zu elements\n", node_count);
return node_count;
}

