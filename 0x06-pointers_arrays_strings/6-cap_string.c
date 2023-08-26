#include "main.h"
/**
 * char *cap_string - capitalized word of string
 * @str: the string to capitalize
 * Return: str
 */

char *cap_string(char *str)
{
int marker = 0;
	while (str[marker])
	{
	while (!(str[marker] >= 'a' && str[marker] <= 'z'))
	marker++;
	if (str[marker - 1] == ' ' ||
	str[marker - 1] == '\t' ||
	str[marker - 1] == '\n' ||
	str[marker - 1] == ',' ||
	str[marker - 1] == ';' ||
	str[marker - 1] == '.' ||
	str[marker - 1] == '!' ||
	str[marker - 1] == '?' ||
	str[marker - 1] == '"' ||
	str[marker - 1] == '(' ||
	str[marker - 1] == ')' ||
	str[marker - 1] == '{' ||
	str[marker - 1] == '}' ||
	marker == 0)
	str[marker] == 32;
	marker++;
	}
	return (str);
}
