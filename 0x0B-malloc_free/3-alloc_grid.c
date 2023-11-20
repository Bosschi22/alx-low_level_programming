#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to grid
 * @width: width inp
 * @height: height inp
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **meek;
int x, yz;
	if (width <= 0 || height <= 0)
		return (NULL);
	meek = malloc(sizeof(int *) * height);
	if (meek == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		meek[x] = malloc(sizeof(int) * width);
		if (meek[x] == NULL)
		{
			for (; x >= 0; x--)
				free(meek[x]);
			free(meek);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (yz = 0; yz < width; yz++)
			meek[x][yz] = 0;
	}
	return (meek);
}
