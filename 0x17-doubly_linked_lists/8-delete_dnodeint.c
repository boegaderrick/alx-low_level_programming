#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index in doubly linked list
* @head: double pointer to linked list to be modified
* @index: position of node to be deleted in linked list
* Return: 1 if operation succeeded, -1 if otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *prior, *after;
	size_t i = 0;

	if (!head || !*head)
		return (-1);
	ptr = *head;
	while (ptr->prev)
		ptr = ptr->prev;
	if (index == 0 && !ptr->next && !ptr->prev)
	{
		free(ptr);
		*head = NULL;
		return (1);
	}
	while (ptr)
	{
		if (i == index)
		{
			if (index == 0)
			{
				*head = ptr->next;
				(*head)->prev = NULL;
			}
			prior = ptr->prev;
			after = ptr->next;
			if (prior)
				prior->next = after;
			if (after)
				after->prev = prior;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
