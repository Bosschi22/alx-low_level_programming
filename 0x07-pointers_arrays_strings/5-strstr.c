#include "main.h"
/**
 * char *_strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *d = needle;

		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
