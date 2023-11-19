#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an int
 * @s: string to be conv
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int a, d, v, len, f, digit;
a = 0;
d = 0;
v = 0;
len = 0;
f = 0;
digit = 0;
	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			v = v * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (v);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int ans, fig1, fig2;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	fig1 = _atoi(argv[1]);
	fig2 = _atoi(argv[2]);
	ans = fig1 * fig2;
	printf("%d\n", ans);
	return (0);
}
