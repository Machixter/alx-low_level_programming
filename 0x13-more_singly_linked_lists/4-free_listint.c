#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer to listint_t struct
 * Return: nothing
 *
 */
void free_listint(listint_t *head)
{
	listint_t *rem;

	while (head)
	{
		rem = head;
		head = head->next;
		free(rem);
	}
	free(head);
}
