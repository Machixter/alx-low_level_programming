#include "lists.h"
/**
 * free_listint2 - frees list and sets a head to NULL
 * @head: pointer to listint_t struct
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *rem;

	if (*head == NULL)
	{
		return;
	}
	rem = *head;
	while (*head)
	{
		rem = *head;
		(*head) = (*head)->next;
		free(rem);
	}
	*head = NULL;
}
