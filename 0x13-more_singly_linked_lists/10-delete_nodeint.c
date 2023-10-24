#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: first node
 * @index: index of node to be deleted
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL && x < index)
	{
		previous = current;
		current = current->next;
		x++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
