#include "lists.h"
/**
 * add_node - function that add node at beginning of a linked list
 * @head: pointer reference to head of linked list
 * @str: pointer to string added to node
 *
 * Return: Address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = (list_t *)malloc(sizeof(list_t));
	if (!head)
		return (NULL);

	newhead->str = strdup(str);
	newhead->len = strlen(str);
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
