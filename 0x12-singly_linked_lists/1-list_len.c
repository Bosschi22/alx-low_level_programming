#include <stdlib.h>
#include "lists.h"

/**
 * list_len - entry level
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
unsigned int  in = 0;
	while (h)
{
	in++;
	h = h->next;
}
return (in);
}
