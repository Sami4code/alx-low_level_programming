#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: paramter head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
