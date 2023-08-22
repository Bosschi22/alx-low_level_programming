#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, e = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of string
 */
void puts_half(char *str)
{
int d, e, run;
	run = 0;
	for (d = 0; str[d] != '\0'; d++)
	run++;
	e = (run / 2);
	if ((run % 2) == 1)
		e = ((run + 1) / 2);
	for (d = e; str[d] != '\0'; d++)
	_putchar(str[d]);
	_putchar('\n');
}
