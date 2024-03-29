#include "lists.h"

/**
 * add_nodeint_end - adds a node at the beginning
 * of a linked list
 * @head: head parameter
 * @n: int parameter
 * Return: null if not successful or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
