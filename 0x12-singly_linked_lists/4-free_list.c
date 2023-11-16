#include "lists.h"
/**
 * free_list - frees all elements in a linked list list_t
 * @head: pointer to head of list list_t
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *rem;

	rem = head;
	while (head)
	{
		rem = head;
		head = head->next;
		free(rem->str);
		free(rem);
	}
	free(head);
}
