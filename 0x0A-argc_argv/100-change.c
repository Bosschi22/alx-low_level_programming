#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the min num of coin
 * make change for an amount of the money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int fig, p, result;
int coins[] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	fig = atoi(argv[1]);
	result = 0;
	if (fig < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && fig >= 0; p++)
	{
		while (fig >= coins[p])
		{
			result++;
			fig -= coins[p];
		}
	}
	printf("%d\n", result);
	return (0);
}
