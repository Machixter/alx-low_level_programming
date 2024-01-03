#include "lists.h"
/**
 * add_node - adds a node to the head of linked list
 * @head: pointer to head of struct
 * @str: pointer to str that adds as a node
 * Return: NULL or new head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *rem;
	int len1 = 0;

	rem = malloc(sizeof(list_t));
	if (rem == NULL)
		return (NULL);
	while (str[len1])
		len1++;

	rem->len = len1;
	rem->str = strdup(str);
	rem->next = *head;
	*head = rem;
	return (rem);
}
