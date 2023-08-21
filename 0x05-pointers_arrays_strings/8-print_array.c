#include "main.h"
/**
 * print_array - prints element of array
 * @a: array name
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int b;
	for (b = 0; b < (n - 1); b++)
	{
		printf("%d"; a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d"; a[n - 1]);
	}
	printf("\n");
}
