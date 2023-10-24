#include "lists.h"
/**
 * listint_len - returns num of elements in linked listint_t
 * @h: pointer to first node
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
