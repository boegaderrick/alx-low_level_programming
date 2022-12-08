#include "lists.h"

/**
* sum_dlistint - sums all integer elements of doubly linked list
* @head: pointer to linked list to be summed
* Return: sum of all elements or zero if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (!head)
		return (sum);
	while (head->prev)
		head = head->prev;
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
