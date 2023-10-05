#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * shash_table_delete - Delete a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current;
	shash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}

/**
 * add_to_sorted_list - Add a node to the sorted linked list of a sorted hash table.
 * @ht: The sorted hash table.
 * @new_node: The node to add.
 */
void add_to_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (!ht || !new_node)
		return;
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	} else
	{
		current = ht->shead;
		while (current)
		{
			if (strcmp(new_node->key, current->key) < 0)
			{
				if (current == ht->shead)
				{
					new_node->sprev = NULL;
					new_node->snext = current;
					current->sprev = new_node;
					ht->shead = new_node;
				}else
				{
					new_node->sprev = current->sprev;
					new_node->snext = current;
					current->sprev->snext = new_node;
					current->sprev = new_node;
				}
				return;
			}
			current = current->snext;
		}
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
}
