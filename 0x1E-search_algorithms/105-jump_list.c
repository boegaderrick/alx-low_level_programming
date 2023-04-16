#include "search_algos.h"

/**
 * jump_list - performs search on a singly linked list
 * @list: pointer to first node of list to be searched
 * @size: length of linked list
 * @value: value to search for
 *
 * Return: pointer to node containing value or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list, *low = NULL, *high = NULL;
	size_t diff = sqrt(size), next_stop;

	if (!temp)
		return (NULL);
	next_stop = temp->index + diff;
	while (temp)
	{
		if (temp->index == next_stop || temp->next == NULL)
		{
			next_stop += diff; /*next_stop = temp->index + diff;*/
			printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
			if (temp->n >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
						temp->index - diff, temp->index);
				high = temp;
				break; }
			if (temp->index < size - 1)
				low = temp; }
		temp = temp->next; }
	if (high)
	{
		low = low ? low : list;
		while (low->n <= high->n)
		{
			printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
			if (low->n == value)
				return (low);
			low = low->next; } }
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				low->index, size - 1);
		while (low)
		{
			printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
			low = low->next; } }
	return (NULL);
}
