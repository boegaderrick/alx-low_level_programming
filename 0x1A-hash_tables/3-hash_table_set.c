#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hash table
 * @key: pointer to a string containing key to be stored
 * @value: pointer to a string containing value to be stored
 *
 * Return: 1 if successful, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, **array, *temp;
	unsigned long int size, idx;
	char *new_value;

	if (!ht || !key || strlen(key))
		return (0);
	array = ht->array;
	size = ht->size;
	idx = key_index((unsigned char *)key, size);
	temp = array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	if (array[idx])
	{
		new_node->next = array[idx];
		array[idx] = new_node;
	}
	else
		array[idx] = new_node;
	return (1);
}

/**
 * create_node - creates a new node
 * @key: pointer to string containing key
 * @value: pointer to string containing value
 *
 * Return: pointer to created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
