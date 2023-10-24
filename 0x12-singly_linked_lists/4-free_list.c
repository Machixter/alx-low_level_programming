#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *rem;

	while (head)
	{
		rem = head->next;
		free(head->str);
		free(head);

		head = rem;
	}
}
