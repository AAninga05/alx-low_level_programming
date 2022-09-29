#include "lists.h"
/**
 * add_dnodeint - add node at beginning of dlistint_t list.
 * @head: Pointer to pointer to head of dlistint_t list.
 * @n: Integer assigned to node data
 * Return: If it fails NULL
 *         Otherwise address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
