#include "lists.h"

/**
* get_nodeint_at_index - finds node at given index
* @head: pointer to node at beginning of list
* @index: index of node in list
* Return: pointer to node at index or NULL if operation failed
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
