 #include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: pointer to listint_t struct
 * @idx: index of the list
 * @n: integer data for new node
 * Return: addrss to new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x =  1;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	current = *head;
	for (x = 1 ; x < idx ; x++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (*head);
}
