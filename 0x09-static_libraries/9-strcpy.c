#include "main.h"
/**
 * char *_strcpy - a func that copy the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int d = 0;
int e = 0;
	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; e < d ; e++)
	{
		dest[e] = src[e];
	}
	dest[d] = '\0';
	return (dest);
}
