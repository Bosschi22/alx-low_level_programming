#include "main.h"
/**
 * puts2 - prints only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int run = 0;
int x = 0;
char *i = str;
int m;
	while (*i != '\0')
	{
		i++;
		run++;
	}
	x = run - 1;
	for (m = 0; m < x; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
