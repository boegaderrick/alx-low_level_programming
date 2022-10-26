#include "lists.h"

/**
* listint_len - counts number of elements in a linked list
* @h: pointer to address of first node
* Return: number of elements counted
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
