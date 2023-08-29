#include "main.h"
/**
 * char *_memcpy - Entry point
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int s = 0;
int x = n;
	for (s = 0; s < x; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
