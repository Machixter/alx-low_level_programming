#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to listint_t list
 * @index: index of node to delete
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rem, *del_node;
	unsigned int x = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	rem = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(rem);
	}
	else
	{
		while (x < index)
		{
			rem = rem->next;
			if (rem == NULL)
			{
				return (-1);
			}
			x++;
		}
		del_node = rem;
		del_node = del_node->next;
		rem->next = del_node->next;
		free(del_node);
	}
	return (1);
}
