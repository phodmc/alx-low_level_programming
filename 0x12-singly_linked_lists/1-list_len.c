#include "lists.h"

/**
* list_len - return number of elements of a linked list
* @h: head of list
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
