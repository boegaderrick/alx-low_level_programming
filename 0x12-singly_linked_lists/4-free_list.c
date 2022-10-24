#include "lists.h"

/**
* free_list - frees dynamically allocated memory that stores a linked list
* @head: linked list in memory to be freed
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
