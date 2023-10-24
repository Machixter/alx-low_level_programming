#include "lists.h"
/**
 * insert_nodeint_at_index - inserte new node at a given position
 * @head: first node
 * @n: new node
 * @idx: index position of new node
 * Return: address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *rem = *head;
	listint_t *new_node;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	rem = *head;

	for (x = 0 ; x < idx - 1 ; x++)
	{
		if (rem == NULL)
		{
			free(new_node);
			return (NULL);
		}
		rem = rem->next;
	}
	new_node->next = rem->next;
	rem->next = new_node;

	return (new_node);
}
