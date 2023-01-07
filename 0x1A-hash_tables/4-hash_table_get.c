#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key from hash table
 * @ht: pointer to hash table
 * @key: string containing key associated with value in hash table
 *
 * Return: value associated with key or NULL if process failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t **array, *temp;

	if (!ht || !key || strlen(key) < 1)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	array = ht->array;
	if (!array[idx])
		return (NULL);

	if (array[idx]->next)
	{
		temp = array[idx];
		while (temp)
		{
			if (strcmp(key, temp->key))
				return (temp->value);
			temp = temp->next;
		}
	}
	return (array[idx]->value);
}
