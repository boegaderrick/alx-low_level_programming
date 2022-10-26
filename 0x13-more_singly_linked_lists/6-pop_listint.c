#include "lists.h"

/**
* pop_listint - deletes head node from linked list
* @head: double pointer to address of head in memory
* Return: head node's data or 0 if linked list is empty
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr = *head;

	if (ptr == NULL || head == NULL)
	{
		return (0);
	}

	*head = ptr->next;
	num = ptr->n;
	free(ptr);

	return (num);
}
