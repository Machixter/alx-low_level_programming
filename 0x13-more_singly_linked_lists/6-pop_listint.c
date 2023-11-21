#include "lists.h"
/**
 * pop_listint - deletes head node of a list and returns data
 * @head: pointer to listint_t struct
 * Return: nodes head data from deleted element
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (n);

}
