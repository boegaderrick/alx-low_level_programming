#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds node at the beginning of linked list
* @head: pointer to pointer of address of first node
* @n: number to be held in new node
* Return: pointer to new node at start of list, NULL if operation failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
