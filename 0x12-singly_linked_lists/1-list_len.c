#include "lists.h"
/**
 * list_len - returns number of elements in linked list_t list
 * @h: pointer to list
 * Return: num of elements in node
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
