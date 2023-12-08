#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - main entry
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *neeew;
list_t *temp = *head;
size_t len = 0;
	while (str[len])
		len++;
	neeew = malloc(sizeof(list_t));
	if (!neeew)
		return (NULL);
	neeew->str = strdup(str);
	neeew->len = len;
	neeew->next = NULL;
	if (*head == NULL)
	{
		*head = neeew;
		return (neeew);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = neeew;
	return (neeew);
}
