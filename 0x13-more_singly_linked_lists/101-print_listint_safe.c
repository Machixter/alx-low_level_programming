#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint - loops through listint_t
 * @head: pointer to first node
 * Return: number of nodes else 0 if nothing in nodes
 */
size_t looped_listint(const listint_t *head)
{
	const listint_t *strt;
	const listint_t *prev;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	strt = head->next;
	prev = (head->next)->next;

	while (prev != NULL)
	{
		if (strt == prev)
		{
			strt = head;
			while (strt != prev)
			{
				node++;
				strt = strt->next;
				prev = prev->next;
			}

			strt = strt->next;
			while (strt != prev)
			{
				node++;
				strt = prev->next;
			}

			return (node);
		}

		strt = strt->next;
		prev = (prev->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node, count = 0;

	node = looped_listint(head);

	if (node == 0)
	{
		for ( ; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (count = 0; count < node; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}

