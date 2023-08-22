#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int run = 0;
	while (*s != '\0')
	{
	run++;
	s++;
	}
	return (run);
}
