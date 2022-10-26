#include "lists.h"

/**
* add_nodeint_end - adds node to end of linked list
* @head: pointer to address of first node
* @n: number to be held in new node
* Return: pointer to updated list, NULL if operation failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tail;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
	{
		return (NULL);
	}
	tail->n = n;
	tail->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = tail;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tail;
	return (*head);
}
