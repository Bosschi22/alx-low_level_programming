#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list in list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *he1;
dlistint_t *he2;
unsigned int i;
	he1 = *head;
	if (he1 != NULL)
		while (he1->prev != NULL)
			he1 = he1->prev;
	i = 0;
	while (he1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = he1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				he2->next = he1->next;
				if (he1->next != NULL)
					he1->next->prev = he2;
			}
			free(he1)
				return (1);
		}
		he2 = he1;
                he1 = he1->next;
		i++;
	}
	return (-1);
}
