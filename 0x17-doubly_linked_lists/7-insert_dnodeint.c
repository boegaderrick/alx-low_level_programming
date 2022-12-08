#include "lists.h"

/**
* insert_dnodeint_at_index - adds node at index of doubly linked list
* @h: double pointer to linked list
* @idx: index of where to insert node in linked list
* @n: value to be held by inserted node
* Return: pointer to new node or NULL if operation failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *ptr = NULL;
	size_t i = 0;

	if (idx == 0 || !h || !*h)
	{
		if (!h)
			add_dnodeint(&new, n);
		else
			new = add_dnodeint(h, n);
		return (new);
	}
	ptr = *h;
	while (ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			ptr->prev->next = new;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	new = add_dnodeint_end(h, n);
	return (new);
}
