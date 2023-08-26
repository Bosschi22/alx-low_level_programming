#include "main.h"
/**
 * reverse_array - reverse arrays of integers
 * @a: array
 * @n: element
 * Return: void
 */

void reverse_array(int *a, int n)
{
int m;
int u;
	for (m = 0; m < n--; m++)
	{
	u = a[m];
	a[m] = a[n];
	a[n] = u;
	}
}
