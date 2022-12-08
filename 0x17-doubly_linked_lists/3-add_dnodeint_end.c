#include "lists.h"

/**
* add_dnodeint_end - adds node to the end of a doubly linked list
* @head: pointer to linked list to add node to
* @n: element to be placed in new node
* Return: pointer to new node or NULL if operation failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!ptr)
	{
		*head = new;
		return (*head);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
