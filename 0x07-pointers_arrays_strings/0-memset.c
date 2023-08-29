#include "main.h"
/**
 * char *_memset - entry point
 * @s: starting address of memory
 * @b: value
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int p = 0;
	for (p = 0; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
