#include "lists.h"

/**
* _len - gets length of a string
* @string: subject string
* Return: length
*/

int _len(const char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
* add_node_end - adds node to the end of a linked list
* @head: address of pointer to linked list
* @str: element to be included in new node
* Return: pointer to list with new node at the end
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *ptr, *h;

	if (string == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = string;
	ptr->len = _len(string);
	ptr->next = NULL;

	h = *head;
	if (h == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = ptr;

	return (*head);
}
