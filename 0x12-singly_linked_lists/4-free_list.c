#include "lists.h"

/**
* free_list - frees dynamically allocated memory that stores a linked list
* @head: linked list in memory to be freed
*/

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
