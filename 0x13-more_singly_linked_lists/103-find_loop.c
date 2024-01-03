#include "lists.h"
/**
 * find_listint_loop - finds a loop in a list
 * @head: pointer to listint_t lists
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			return (one);
		}
	}
	return (NULL);
}
