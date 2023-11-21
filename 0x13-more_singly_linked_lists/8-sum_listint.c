#include "lists.h"
/**
 * sum_listint - sums values from listint_t
 * @head: pointer to listint_t struct
 * Return: sum of all data n from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
