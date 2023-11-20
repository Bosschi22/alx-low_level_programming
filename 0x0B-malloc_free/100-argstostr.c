#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int vi, un, r = 0, l = 0;
char *str;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (vi = 0; vi < ac; vi++)
	{
		for (un = 0; av[vi][un]; un++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (vi = 0; vi < ac; vi++)
	{
		for (un = 0; av[vi][un]; un++)
	{
		str[r] = av[vi][un];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
