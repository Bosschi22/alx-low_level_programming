#include "lists.h"


/**
 * add_dnodeint - adds a new node at the begin
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *fresh;
dlistint_t *i;
	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->prev = NULL;
	i = *head;
        if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}
        fresh->next = i;
	if (i != NULL)
	i->prev = fresh;
        *head = fresh;
	return (fresh);
}
