
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of ints
 * @min: min range of values stored
 * @max: max range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)

{
int *ptr;
int t, size;
	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (t = 0; min <= max; t++)
		ptr[t] = min++;
	return (ptr);
}
