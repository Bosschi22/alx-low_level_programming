#include "main.h"
/**
 * _isdigit - Main entry
 * @c: character
 * Return: 1 for digit, 0 for alphabet
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
