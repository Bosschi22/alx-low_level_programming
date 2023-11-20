#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size nd assign char c
 * @size: siz of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int b;
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		str[b] = c;
	return (str);
}
