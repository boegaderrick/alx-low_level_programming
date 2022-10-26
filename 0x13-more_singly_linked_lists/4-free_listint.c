#include "lists.h"

/**
* free_listint - frees memory allocated for linked list
* @head: pointer to memory address to be freed
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
