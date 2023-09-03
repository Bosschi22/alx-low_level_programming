#include "main.h"
/**
 * _isupper - checks for lowercase character
 * @c: the character
 * Return: 1 upper 0 lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
