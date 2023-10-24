#include "lists.h"
/**
 * get_nodeint_at_index - search for node at index
 * @index: index of the node
 * @head: first node
 * Return: n'th node of listint_t else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
