#include "lists.h"

/**
* free_listint - frees memory allocated for linked list
* @head: pointer to memory address to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
