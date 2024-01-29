#include "main.h"
/**
 * _strlen - return d lngth of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int lonth = 0;
	while (*s != '\0')
	{
		lonth++;
		s++;
	}
	return (lonth);
}
