#include "lists.h"

/**
* print_dlistint - prints elements of a doubly linked list
* @h: pointer to the linked list
* Return: number of nodes in list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
