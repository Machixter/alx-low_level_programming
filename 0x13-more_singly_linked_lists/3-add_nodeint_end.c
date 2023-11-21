#include "lists.h"
/**
 * add_nodeint_end - adds new node to end
 * @n: int to put into new node
 * @head: pointer to list struct
 * Return: addrs of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *rem;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		rem = *head;
		while (rem->next != NULL)
		{
			rem = rem->next;
		}
		rem->next = new_node;
	}
	return (*head);
}
