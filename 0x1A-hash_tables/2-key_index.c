#include "hash_tables.h"

/**
 * key_index - gets index in hash table array for key/value storage
 * @key: key associated with value to aid in storage and retrieval
 * @size: size of hash table array
 * Return: index in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
