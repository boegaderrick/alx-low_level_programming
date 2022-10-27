#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at given index of a linked list
* @head: double pointer to node at the beginning of the list
* @idx: index in list to insert new node
* @n: value to insert at index
* Return: pointer to new node or NULL if operation failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (*head);
	}
	while (h != NULL)
	{
		if (i == idx)
		{
			new->next = h;
			break;
		}
		h = h->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	h = *head;
	i = 0;
	while (h != NULL)
	{
		if (i == (idx - 1))
		{
			h->next = new;
			break;
		}
		h = h->next;
		i++;
	}
	return (new);
}
