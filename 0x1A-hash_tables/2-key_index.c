#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table's array.
 * @key: The key to be hashed.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Modulo the hash value by the size of the array to get the index */
	return (hash_value % size);
}

