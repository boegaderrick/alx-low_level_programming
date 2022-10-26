#include "lists.h"

int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}

	*head = ptr->next;
	num = ptr->n;
	
	return (num);
}
