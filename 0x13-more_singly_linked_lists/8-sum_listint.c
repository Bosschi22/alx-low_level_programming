#include "lists.h"
/**
 * sum_listint - func calculates the sum of all the data in a listint_t list
 * @head: first node
 * Return: result
 */
int sum_listint(listint_t *head)
{
int count = 0;
listint_t *temp = head;
	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
