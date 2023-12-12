#include "lists.h"

/**
 * add_nodeint - entry level
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neeew;
	neeew = malloc(sizeof(listint_t));
	if (!neeew)
		return (NULL);
	neeew->n = n;
	neeew->next = *head;
	*head = neeew;
	return (neeew);
}
