#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the node array in new new hash table
 * Return: pointer to new table or NULL if operation failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	size_t i;

	if (size < 1)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	new->array = array;

	for (i = 0; i < size; i++)
		array[i] = NULL;

	return (new);
}
