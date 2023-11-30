#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array
 * @size: number of element
 * @cmp: pointer to function
 * Return: 0 if size, -1 if not
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int t = 0;
	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
			if (cmp(array[t]))
				return (t);
			t++;
			}
		}
	}
	return (-1);
}
