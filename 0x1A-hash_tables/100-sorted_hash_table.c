#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the created shash_table_t, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size) {
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Add or update a key-value pair in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
	shash_node_t *new_node, *current;
	shash_node_t *prev = NULL;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
 			return (1);
		}
		prev = current;
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		free(new_node);
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
		free(new_node->key);
		free(new_node);
		return (0);}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	add_to_sorted_list(ht, new_node);
	return (1);
}


/**
 * shash_table_get - Retrieve a value associated with a key from a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key) {
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current) {
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}


/**
 * shash_table_print - Print the sorted hash table in ascending order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht) 
{
	shash_node_t *current;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		printf("%s:%s\n", current->key, current->value);
		current = current->snext;
	}
}


/**
 * shash_table_print_rev - Print the sorted hash table in descending order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht) {
	shash_node_t *current;

	if (!ht)
		return;

	current = ht->stail;
	while (current)
	{
		printf("%s:%s\n", current->key, current->value);
		current = current->sprev;
	}
}
