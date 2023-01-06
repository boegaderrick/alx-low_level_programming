#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array, *temp;
	unsigned long int i;

	array = ht->array;
	if (array)
	{
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
					if (temp->next || array[i + 1])
						printf(", ");
					temp = temp->next;
				}
			}
			else
			{
				printf("'%s': '%s'", array[i]->key, array[i]->value);
				if (array[i + 1])
					printf(", ");
			}
		}
		printf("}\n");
	}
}
