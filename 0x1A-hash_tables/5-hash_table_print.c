#include "hash_tables.h"

/**
 * hash_table_print - prints contents of a hash table
 * @ht: pointer to hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array, *temp;
	unsigned long int i, count = 0, printed = 0;

	array = ht->array;
	if (ht)
	{
		count = get_count(ht);
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (!array[i])
				continue;
			if (array[i]->next)
			{
				temp = array[i];
				while (temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					printed++;
					if (printed < count)
						printf(", ");
					temp = temp->next;
				}
			}
			else
			{
				printf("'%s': '%s'", array[i]->key, array[i]->value);
				printed++;
				if (printed < count)
					printf(", ");
			}
		}
		printf("}\n");
	}
}

/**
 * get_count - gets count of all items in the hash table
 * @ht: hash table to be processed
 *
 * Return: count of all items
 */
unsigned long int get_count(const hash_table_t *ht)
{
	hash_node_t **array, *temp;
	unsigned long int i, count = 0;

	array = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (array[i])
		{
			temp = array[i];
			while (temp)
			{
				count++;
				temp = temp->next;
			}
		}
	}
	return (count);
}
