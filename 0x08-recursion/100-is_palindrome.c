include "main.h"
int check_pal(char *s, int t, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checking for palindrome
 * @s: string in reverse
 * Return: 1 yes, 0 no
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - lenght of string
 * @s: string length
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1));
}
/**
 * check_pal - Checks for character
 * @s: string check
 * @t: iterator
 * @len: lenght
 */
int check_pal(char *s, int t, int le n)
{
	if (*(s + t) != *(s + len - 1))
		return (0);
	if (t >= len)
		return (1);
	return (check_pal(s, t + 1, len - 1));
}
