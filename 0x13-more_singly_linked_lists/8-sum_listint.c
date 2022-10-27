#include "lists.h"

/**
* sum_listint - adds all contents of a linked list together
* @head: pointer to node at the beginning of linked list
* Return: sum or 0 if the linked list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
