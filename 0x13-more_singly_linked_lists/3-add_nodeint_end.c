#include "lists.h"
/**
 * add_nodeint_end - adds new node to the end of listint_t
 * @n: data for new node
 * @head: first node
 * Return: address of new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *rem = *head;

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
		return (new_node);
	}
	while (rem->next)
		rem = rem->next;
	rem->next = new_node;

	return (new_node);
}
