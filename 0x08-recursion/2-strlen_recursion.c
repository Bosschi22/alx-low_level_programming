#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: the string to measure
 * Return: The length
 */

int _strlen_recursion(char *s)
{
int lnth = 0;
	if (*s)
	{
		lnth++;
		lnth += _strlen_recursion(s + 1);
	}
	return (lnth);
}
