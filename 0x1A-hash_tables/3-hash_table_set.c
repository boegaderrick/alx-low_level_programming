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
	hash_node_t *new_node, **array;
	unsigned long int size, idx;

	if (!strlen(key))
		return (0);
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	array = ht->array;
	size = ht->size;
	idx = key_index((unsigned char *)key, size);
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
 * add_node - adds node to existing linked list in case there is a collision
 * @head: pointer to linked list already at position of conflict
 * @new_node: pointer to new node
 */
void add_node(hash_node_t *head, hash_node_t *new_node)
{
	new_node->next = head;
	head = new_node;
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
	new->key = malloc(sizeof(char) * strlen(key) + 1);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
