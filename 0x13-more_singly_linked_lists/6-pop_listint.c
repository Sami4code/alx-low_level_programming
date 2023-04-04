#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: 0 if the list is vacant
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);

}
