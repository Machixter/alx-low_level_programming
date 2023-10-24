#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: node to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *rem;

	while (head)
	{
		rem = head->next;
		free(head);
		head = rem;
	}
}
