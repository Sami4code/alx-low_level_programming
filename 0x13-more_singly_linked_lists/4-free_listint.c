#include "lists.h"

/**
 *free_listint - The function that frees  memory allocation
 *@head: memory to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
