#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: node to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *rem;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		rem = (*head)->next;
		free(*head);
		*head = rem;
	}
	*head = NULL;
}
