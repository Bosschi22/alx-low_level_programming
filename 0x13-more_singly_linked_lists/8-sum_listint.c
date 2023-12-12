#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node in the linked list
 *
 * Return: result
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tem = head;
	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
