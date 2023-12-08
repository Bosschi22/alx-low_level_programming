#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - entry point
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *neeew;
unsigned int len = 0;
	while (str[len])
		len++;
	neeew = malloc(sizeof(list_t));
	if (!neeew)
		return (NULL);
	neeew->str = strdup(str);
	neeew->len = len;
	neeew->next = (*head);
	(*head) = neeew;
	return (*head);
}
