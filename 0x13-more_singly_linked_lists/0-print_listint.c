#include "lists.h"

/**
* print_listint - prints all elements of a linked list
* @h: pointer to address of first node of linked list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
