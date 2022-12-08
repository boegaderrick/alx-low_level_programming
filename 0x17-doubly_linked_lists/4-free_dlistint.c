#include "lists.h"

/**
* free_dlistint - frees memory allocated to doubly linked list
* @head: pointer to linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL, *temp = NULL;

	if (head)
	{
		ptr = head;
		while (ptr->prev)
			ptr = ptr->prev;
		while (ptr)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		head = NULL;
		ptr = NULL;
		temp = NULL;
	}
}
