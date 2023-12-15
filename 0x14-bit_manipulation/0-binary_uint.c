#include "main.h"

/**
 * binary_to_uint - function converts a binary number
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int a;
unsigned int number;
	number = 0;
	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		number <<= 1;
		if (b[a] == '1')
			number += 1;
	}
	return (number);
