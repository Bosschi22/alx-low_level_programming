#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *i;
dlistint_t *fresh;
	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;
	i = *head;
	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = fresh;
	}
	else
	{
		*head = fresh;
	}
	fresh->prev = i;
	return (fresh);
}
