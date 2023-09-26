#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{
listint_t *temp;
int fig;
	if (!head || !*head)
		return (0);
	fig = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (fig);
}
