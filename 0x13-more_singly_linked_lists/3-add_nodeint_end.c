#include "lists.h"

/**
 * add_nodeint_end - adds a node to end
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *neeew;
listint_t *temp = *head;
	neeew = malloc(sizeof(listint_t));
	if (!neeew)
		return (NULL);
	neeew->n = n;
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
