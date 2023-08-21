#include "main.h"
/**
 * isdigit - checks for digits
 * @c: the character checked
 * Return: 1 for digits character 0 for alphabets
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
