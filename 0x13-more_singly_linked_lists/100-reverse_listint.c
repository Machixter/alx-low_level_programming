#include "lists.h"
/**
 * reverse_listint - function that reverses linked list
 * @head: pointer to listint_t struct
 * Return: pointer to first node of reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rem, *pre = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		rem = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = rem;
	}
	*head = pre;
	return (*head);
}
