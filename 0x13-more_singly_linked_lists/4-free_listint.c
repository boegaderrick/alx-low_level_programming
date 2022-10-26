#include "lists.h"

/**
* free_listint - frees memory allocated for linked list
* @head: pointer to memory address to be freed
*/

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
