#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: created hash table or NULL if operation failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	shash_node_t **array;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);
	array = malloc(sizeof(shash_node_t *) * size);
	if (!array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = NULL;
	new->size = size;
	new->array = array;
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}

/**
 * shash_table_set - adds a key/value pair to a sorted hash table
 * @ht: pointer to hash table
 * @key: string containing key
 * @value: string containing value
 *
 * Return: 1 if successful, 0 if otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t **array, *new_node, *temp;
	char *new_value = NULL;

	if (!ht || !key || !strlen(key) || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	array = ht->array;
	if (array[idx] != NULL)
	{
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
		new_node = create_shash_node(key, value);
		if (!new_node)
			return (0);
		new_node->next = array[idx];
		array[idx] = new_node;
	}
	else
	{
		new_node = create_shash_node(key, value);
		if (!new_node)
			return (0);
		array[idx] = new_node;
	}
	sorted_list_insert(ht, array[idx]);
	return (1);
}

/**
 * sorted_list_insert - creates and adds elements to a sorted linked list
 * @ht: pointer to hash table to be contained in sorted linked list
 * @new_node: pointer to node to add to sorted list
 */
void sorted_list_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr;

	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}
	curr = ht->shead;
	if (strcmp(curr->key, new_node->key) > 0)
	{
		new_node->snext = curr;
		curr->sprev = new_node;
		ht->shead = new_node;
		return;
	}
	while (curr->snext != NULL && strcmp(curr->snext->key, new_node->key) < 0)
		curr = curr->snext;

	new_node->sprev = curr;
	new_node->snext = curr->snext;
	if (curr->snext)
		curr->snext->sprev = new_node;
	curr->snext = new_node;
	if (!new_node->snext)
		ht->stail = new_node;
}

/**
 * create_shash_node - creates a node to be added to a sorted hash table
 * @key: string containing key
 * @value: string containing value
 *
 * Return: new node, NULL if operation failed
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
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
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;
	return (new);
}

/**
 * shash_table_get - gets value associated with key in a sorted hash table
 * @ht: pointer to sorted hash table to be searched for key/value pair
 * @key: string containing key to be searched for
 *
 * Return: value associated with passed key, NULL if value not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t **array, *temp;

	if (!ht || !key || strlen(key) < 1)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	array = ht->array;
	if (!array || !array[idx])
		return (NULL);

	if (array[idx]->next)
	{
		temp = array[idx];
		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (array[idx]->value);
}

/**
 * shash_table_print - print all contents of sorted hash table
 * @ht: pointer to sorted hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht && ht->shead)
	{
		temp = ht->shead;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->snext;
			if (temp)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints contents of a sorted hash table in reverse
 * @ht: pointer to sorted hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht && ht->stail)
	{
		temp = ht->stail;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
			if (temp)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht)
	{
		node = ht->shead;
		while (node)
		{
			temp = node;
			node = node->snext;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		free(ht->array);
		free(ht);
	}
}
