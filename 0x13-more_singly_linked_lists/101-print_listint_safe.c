/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *current = head;
        size_t count = 0;

        while (current != NULL)
        {
                printf("%d\n", current->n);
                current = current->next;
                count++;
                break;
        }
        return (count);
}
