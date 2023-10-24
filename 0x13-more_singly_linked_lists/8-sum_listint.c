#include "lists.h"
/**
 * sum_listint - returns sum of all data (n) of listint_t
 * @head: first node
 * Return: sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
