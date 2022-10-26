#include "lists.h"

/**
* free_listint2 - frees memory allocated to linked list
* @head: double pointer to address of memory to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			free(ptr);
			ptr = ptr->next;
		}
		free(ptr);
		ptr = NULL;
		*head = NULL;
	}
}
