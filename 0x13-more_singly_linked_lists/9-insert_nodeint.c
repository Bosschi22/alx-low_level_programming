#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *neeew;
listint_t *temp = *head;
	neeew = malloc(sizeof(listint_t));
	if (!neeew || !head)
		return (NULL);
	neeew->n = n;
	neeew->next = NULL;
	if (idx == 0)
	{
		neeew->next = *head;
		*head = neeew;
		return (neeew);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			neeew->next = temp->next;
			temp->next = neeew;
			return (neeew);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
