#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t list
 * @head: pointer to first node
 * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	listint_t *rem;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	rem = *head;
	*head = (*head)->next;
	free(rem);
	return (data);
}
