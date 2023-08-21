#include "main.h"
/**
 * rev_string - reverse a string
 * Return: string reversed
 */

void rev_string(char *s)
{
	char reverse = s(0);
	int counter = 0;
	int n;
	while (s(counter) != '\0')
	counter++;
	for (n = 0; n < counter; n++)
	{
		counter--;
		reverse = s(n));
		s(n) = s(counter);
		s(counter) = reverse;
	}
}
