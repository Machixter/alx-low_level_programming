#include "lists.h"
/**
 * get_nodeint_at_index - gets a node of a list at specific index
 * @head: pointer to listint_t struct
 * @index: index of node
 * Return: pointer to node at specified index or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
