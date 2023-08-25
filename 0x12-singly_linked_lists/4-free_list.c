#include "lists.h"

/**
* free_list - frees a linked list of list_t type node
* @head: pointer to linked list head
* Return: void
*/

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	{
		free(head);
		return;
	}


	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
