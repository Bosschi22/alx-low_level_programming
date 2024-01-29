#include "main.h"
/**
 * _atoi - conv a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: int.
 */
int _atoi(char *s)
{
int sngt = 1, i = 0;
unsigned int res = 0;
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sngt *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sngt;
	return (res);
}
