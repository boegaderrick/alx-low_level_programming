#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at given index
* @head: double pointer to node at start of linked list
* @index: index of node to be deleted
*
* Return: 1 on success or -1 if operation failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *delete, *swap, *ptr = *head;

	if (ptr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
	}
	else
	{
		while (ptr != NULL)
		{
			if (i == (index -1))
			{
				swap = ptr;
			}
			if (i == index)
			{
				delete = ptr;
				swap->next = delete->next;
				free(delete);
				delete = NULL;
				break;
			}
			ptr = ptr->next;
			i++;
		}
	}
	return (1);
}
