#include "main.h"
#include <stdlib.h>
/**
 * str_concat -Entry point
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *conct;
int a, pi;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = pi = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[pi] != '\0')
		pi++;
	conct = malloc(sizeof(char) * (a + pi + 1));
	if (conct == NULL)
		return (NULL);
	a = pi = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}
	while (s2[pi] != '\0')
	{
		conct[a] = s2[pi];
		a++, pi++;
	}
	conct[a] = '\0';
	return (conct);
}
