#include "main.h"
/**
 * _strlen - Entry point
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int lnth = 0;
	while (*s != '\0')
	{
		lnth++;
		s++;
	}
	return (lnth);
}
