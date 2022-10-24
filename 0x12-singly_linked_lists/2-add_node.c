#include "lists.h"

/**
* _strlen - gets length of a string
* @string: subject string
* Return: length
*/

int _strlen(const char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
* add_node - adds node to beginning of a linked list
* @head: address of pointer to linked list
* @str: element to be included in new node
* Return: pointer to list with new node at the beginning
*/

list_t *add_node(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *ptr;

	if (string == NULL || head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = string;
	ptr->len = _strlen(string);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
