#include "lists.h"
/**
 * add_nodeint - add a new node at the begginning of a listint_t
 * @head: pointer to first node
 * @n: new node
 * Return: address of new node else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
