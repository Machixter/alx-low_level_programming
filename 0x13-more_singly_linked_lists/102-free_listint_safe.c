#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer to listint_t lists
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *rem;

	rem = *h;
	while (rem)
	{
		rem = *h;
		rem = rem->next;
		free_list(rem);
		counter++;
	}
	*h = NULL;

	return (counter);
}
/**
 * free_list - frees a listint_t recursively
 * @head: pointer to listint_t lists
 * Return: nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
