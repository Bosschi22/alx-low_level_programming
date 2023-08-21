#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int run = 0;
	int m;
	while (*s != '\0')
	{
		run++;
		s++;
	}
	s--;
	for (m = run; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
