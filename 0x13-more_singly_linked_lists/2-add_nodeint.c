#include "lists.h"
/**
 * add_nodeint - adds new node at the start
 * @head: pointer to list_t struct
 * @n: int data to insert into new node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
