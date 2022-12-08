#include "lists.h"

/**
* dlistint_len - gets count of elements of a doubly linked list
* @h: pointer to the linked list
* Return: number of nodes in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
