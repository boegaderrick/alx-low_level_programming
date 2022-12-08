#include "lists.h"

/**
* get_dnodeint_at_index - gets node at index in doubly linked list
* @head: pointer to linked list
* @index: position of node to be returned
* Return: pointer to node at index or NULL if node not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	size_t i = 0;

	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	ptr = head;
	while (ptr)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
