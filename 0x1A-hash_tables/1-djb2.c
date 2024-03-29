#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int t;

	hash = 5381;
	while ((t = *str++))
		hash = ((hash << 5) + hash) + t; /* hash * 33 + c */

	return (hash);
}
