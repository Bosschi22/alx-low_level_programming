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
int sumn, sumx, z;
	for (z = 0; z < size; z++)
	{
	sumn = sumn + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
	sumx += a[z * size + (size - y - 1)];
	}
	printf("%d, %d\n", sumn, sumx);
}
