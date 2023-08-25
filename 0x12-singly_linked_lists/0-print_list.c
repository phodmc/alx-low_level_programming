#include "lists.h"

/**
* print_list - print out all the elements of a linked list
* @h: head of list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
