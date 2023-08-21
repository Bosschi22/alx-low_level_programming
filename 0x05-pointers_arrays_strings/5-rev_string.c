#include "main.h"
/**
 * rev_string - reverse a string
 * Return: string reversed
 */

void rev_string(char *s)
{
	char reverse = u[0];
	int counter = 0;
	int n;
	while (u[counter] != '\0')
	counter++;
	for (n = 0; n < counter; n++)
	{
		counter--;
		reverse = u[n];
		u[n] = u[counter];
		u[counter] = reverse;
	}
}
