#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
int sum0, sum1, z;
	sum0 = 0;
	sum1 = 0;
	for (z = 0; z < size; z++)
	{
	sum0 = sum0 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
	sumx += a[z * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum0, sum1);
}
