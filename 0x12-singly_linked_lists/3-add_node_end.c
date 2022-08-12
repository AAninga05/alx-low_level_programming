#include "lists.h"
/**
 * add_node_end - function to add node to end of linked list
 * @head: pointer reference to end of linked list
 * @str: pointer to string added to node
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode = *head;
	list_t *newhead = malloc(sizeof(list_t));

	if (!newhead)
		return (NULL);

	newhead->str = strdup(str);
	newhead->len = strlen(str);
	newhead->next = NULL;

	if (*head == NULL)
	{
		*head = newhead;
		return (newhead);
	}

	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newhead;
	return (newhead);
}
