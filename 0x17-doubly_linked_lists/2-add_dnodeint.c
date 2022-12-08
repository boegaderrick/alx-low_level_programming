#include "lists.h"

/**
* add_dnodeint - adds node at beginning of doubly linked list
* @head: pointer to linked list
* @n: element to place in node
* Return: pointer to new node or NULL if operation failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!ptr)
	{
		*head = new;
		return (*head);
	}
	while (ptr->prev)
		ptr = ptr->prev;
	ptr->prev = new;
	new->next = ptr;
	*head = new;
	return (new);
}
