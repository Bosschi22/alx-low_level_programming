#include "main.h"
/**
 * char *leet - encoded with 1337
 * @n: input value
 * Return: n
 */

char *leet(char *n)
{
int a, b;
char x1[] = "aAeEoOtTlL";
char x2[] = "4433007711";
	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
		if (n[a] == x1[b])
		{
			n[a] = x2[b];
		}
	return (n);
		}
	}
}
