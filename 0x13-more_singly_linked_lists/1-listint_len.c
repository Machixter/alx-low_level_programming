#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: pointer to listint_t structure
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
