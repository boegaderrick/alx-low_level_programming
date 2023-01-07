#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table by freeing memory allocated to it
 * @ht: pointer to hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array, *node, *temp;
	unsigned long int i;

	if (ht)
	{
		array = ht->array;
		for (i = 0; i < ht->size; i++)
		{
			if (array[i])
			{
				if (array[i]->next)
				{
					node = array[i];
					while (node)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}
				else
				{
					free(array[i]->key);
					free(array[i]->value);
					free(array[i]);
				}
			}
		}
		free(array);
		array = NULL;
		free(ht);
		ht = NULL;
	}
}
