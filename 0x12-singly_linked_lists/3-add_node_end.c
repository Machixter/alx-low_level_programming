#include "lists.h"
/**
 * add_node_end - adds new node at end of a list_t list
 * @head: double pointer to the head of a node
 * @str: string to be added to node
 * Return: address of new element else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *rem = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (rem->next)
		rem = rem->next;
	rem->next = new;

	return (new);
}
