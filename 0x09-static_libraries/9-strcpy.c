#include "main.h"
/**
 * char *_strcpy - Entry point
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int t = 0;
int u = 0;
	while (*(src + t) != '\0')
	{
		t++;
	}
	for (; u < t; u++)
	{
		dest[u] = src[u];
	}
	dest[t] = '\0';
	return (dest);
}
