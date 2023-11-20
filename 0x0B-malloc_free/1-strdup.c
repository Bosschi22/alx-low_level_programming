#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new mem space loc
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *ccc;
int i, x = 0;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ccc = malloc(sizeof(char) * (i + 1));
	if (ccc == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		ccc[x] = str[x];
	return (ccc);
}
